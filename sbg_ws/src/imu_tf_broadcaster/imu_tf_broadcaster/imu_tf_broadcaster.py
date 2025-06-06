#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import TransformStamped
from tf2_ros import TransformBroadcaster
from sbg_driver.msg import SbgEkfQuat

class ImuTFBroadcaster(Node):
    def __init__(self):
        super().__init__('imu_tf_broadcaster')
        self.broadcaster = TransformBroadcaster(self)
        self.subscription = self.create_subscription(
            SbgEkfQuat,
            '/sbg/ekf_quat',
            self.ekf_quat_callback,
            10
        )

    def ekf_quat_callback(self, msg):
        t = TransformStamped()
        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = 'map'
        t.child_frame_id = 'imu_link_ned'

        # Use real quaternion from message
        t.transform.rotation = msg.quaternion

        # Set position to 0 (static)
        t.transform.translation.x = 0.0
        t.transform.translation.y = 0.0
        t.transform.translation.z = 0.0

        self.broadcaster.sendTransform(t)

def main(args=None):
    rclpy.init(args=args)
    node = ImuTFBroadcaster()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
