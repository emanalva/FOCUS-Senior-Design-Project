#Script designed to launch nodes without terminal usage
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            pacakge='gazebo_ros',
            executable="gazebo",
            name='gazebo',
            output='screen',
            parameters=[{'use_sim_time': True}]
        ),
        Node(
            package='teleop_twist_joy',
            executable='teleop_node',
            name='teleop_node',
            output='screen'
        )
    ])