from launch import LaunchDescription
from launch.actions import ExecuteProcess
from launch_ros.actions import Node
from datetime import datetime

def generate_launch_description():
    # Generate timestamp for unique bag folder
    timestamp = datetime.now().strftime('%Y%m%d_%H%M%S')
    bag_path = f'/home/frfusera/ros2_bags/nucleus_bags/nucleus_bag_{timestamp}'

    return LaunchDescription([
        # Start the nucleus_node
        Node(
            package='nucleus_driver_ros2',
            executable='nucleus_node',
            name='nucleus_node',
            output='screen',
        ),

        # Start ros2 bag record
        ExecuteProcess(
            cmd=['ros2', 'bag', 'record', '-o', bag_path, '-a'],
            output='screen'
        )
    ])