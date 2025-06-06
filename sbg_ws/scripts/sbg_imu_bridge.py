#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Imu
from sbg_driver.msg import SbgImuData

class ImuBridge(Node):
    def __init__(self):
        super().__init__('sbg_imu_bridge')
        self.pub = self.create_publisher(Imu, '/imu/data_raw', 10)
        self.sub = self.create_subscription(SbgImuData, '/sbg/imu_data', self.callback, 10)

    def callback(self, msg):
        imu = Imu()
        imu.header = msg.header
        imu.linear_acceleration = msg.accel
        imu.angular_velocity = msg.gyro
        # No orientation in raw IMU — leave it default
        self.pub.publish(imu)

def main(args=None):
    rclpy.init(args=args)
    node = ImuBridge()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
