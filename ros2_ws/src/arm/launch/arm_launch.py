from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        #Launch state publisher for each joint
        Node(
            package='joint_state_publisher',
            executable='joint_state_publisher',
            name='joint_state_publisher',
            output='screen',
            parameters=[{'use_sim_time': True}]
        ),
        Node(
                package='joint_state_publisher_gui',
                executable='joint_state_publisher_gui',
                name='joint_state_publisher_gui',
                output='screen',
                parameters=[{'use_sim_time': True}]
        ),
        #Connect joint nodes
        Node(
                package='joint_controller',
                executable='joint_controller_node1',
                name='joint_controller1',
                output='screen',
                parameters=[{'joint_name': 'joint1'}]
        ),
    ])  
