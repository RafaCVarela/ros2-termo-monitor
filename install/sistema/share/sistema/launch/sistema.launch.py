from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='sistema',
            executable='temperatura_node',
            name='temperatura_node'
        ),
        Node(
            package='sistema',
            executable='monitor_node',
            name='monitor_node'
        )
    ])
