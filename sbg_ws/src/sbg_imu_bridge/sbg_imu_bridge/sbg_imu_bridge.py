#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sbg_driver.msg import SbgEkfEuler, SbgImuData
from sensor_msgs.msg import Imu
from geometry_msgs.msg import TransformStamped
from tf2_ros import TransformBroadcaster
from tf_transformations import quaternion_from_euler
import math

class ImuTfBroadcaster(Node):
    def __init__(self):
        super().__init__('sbg_imu_bridge')

        self.br = TransformBroadcaster(self)
        self.imu_pub = self.create_publisher(Imu, '/imu/data_raw', 10)
        self.imu_data = None  # will store latest IMU data

        # Subscribe to EKF Euler orientation
        self.create_subscription(
            SbgEkfEuler,
            '/sbg/ekf_euler',
            self.listener_callback,
            10
        )

        # Subscribe to IMU data for angular velocity and linear acceleration
        self.create_subscription(
            SbgImuData,
            '/sbg/imu_data',
            self.imu_data_callback,
            10
        )

        self.imu_warned = False

    def imu_data_callback(self, msg):
        self.imu_data = msg

    def listener_callback(self, msg):
        # Convert Euler to quaternion
        roll = msg.angle.x
        pitch = msg.angle.y
        yaw = msg.angle.z
        q = quaternion_from_euler(roll, pitch, yaw)

        # Broadcast TF transform
        t = TransformStamped()
        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = 'map'
        t.child_frame_id = 'imu_link_ned'
        t.transform.translation.x = 0.0
        t.transform.translation.y = 0.0
        t.transform.translation.z = 0.0
        t.transform.rotation.x = q[0]
        t.transform.rotation.y = q[1]
        t.transform.rotation.z = q[2]
        t.transform.rotation.w = q[3]
        self.br.sendTransform(t)

        # Publish IMU message
        imu_msg = Imu()
        imu_msg.header.stamp = t.header.stamp
        imu_msg.header.frame_id = 'imu_link_ned'
        imu_msg.orientation.x = q[0]
        imu_msg.orientation.y = q[1]
        imu_msg.orientation.z = q[2]
        imu_msg.orientation.w = q[3]

        if self.imu_data:
            imu_msg.angular_velocity.x = self.imu_data.gyro.x
            imu_msg.angular_velocity.y = self.imu_data.gyro.y
            imu_msg.angular_velocity.z = self.imu_data.gyro.z

            imu_msg.linear_acceleration.x = self.imu_data.accel.x
            imu_msg.linear_acceleration.y = self.imu_data.accel.y
            imu_msg.linear_acceleration.z = self.imu_data.accel.z
        else:
            if not self.imu_warned:
                self.get_logger().warn("No /sbg/imu_data received yet; publishing zeros.")
                self.imu_warned = True

        self.imu_pub.publish(imu_msg)

def main(args=None):
    rclpy.init(args=args)
    node = ImuTfBroadcaster()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()