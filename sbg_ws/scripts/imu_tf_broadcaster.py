#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sbg_driver.msg import SbgImuData
from geometry_msgs.msg import TransformStamped
import tf2_ros
import math
from builtin_interfaces.msg import Time

class ImuTFBroadcaster(Node):
    def __init__(self):
        super().__init__('imu_tf_broadcaster')
        self.tf_broadcaster = tf2_ros.TransformBroadcaster(self)
        self.subscription = self.create_subscription(
            SbgImuData,
            '/sbg/imu_data',
            self.imu_callback,
            10)
        self.get_logger().info('IMU TF Broadcaster Initialized')

        self.yaw = 0.0  # simulated yaw angle

    def imu_callback(self, msg):
        dt = 1.0 / 100.0  # Assume 100 Hz IMU
        self.yaw += msg.gyro.z * dt

        t = TransformStamped()
        t.header.stamp = msg.header.stamp
        t.header.frame_id = 'map'
        t.child_frame_id = 'imu_link_ned'

        t.transform.translation.x = 0.0
        t.transform.translation.y = 0.0
        t.transform.translation.z = 0.0

        qz = math.sin(self.yaw / 2.0)
        qw = math.cos(self.yaw / 2.0)

        t.transform.rotation.x = 0.0
        t.transform.rotation.y = 0.0
        t.transform.rotation.z = qz
        t.transform.rotation.w = qw

        self.tf_broadcaster.sendTransform(t)

def main():
    rclpy.init()
    node = ImuTFBroadcaster()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
