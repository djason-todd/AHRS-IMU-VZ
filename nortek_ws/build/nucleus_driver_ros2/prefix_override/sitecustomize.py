import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/frfusera/ros2_ws/nortek_ws/install/nucleus_driver_ros2'
