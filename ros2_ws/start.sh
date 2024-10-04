#!/bin/bash

echo "Sourcing..."
source /opt/ros/jazzy/setup.bash

echo "Sourcing..."
#No sourcing of workspace needed
source ~/ros2_ws/install/setup.bash

#Launch sim and nodes
echo "Launching Sim..."
#ros2 launch ros_gz/ros_gz_sim/launch gz_sim.launch.py.in
gz sim
echo "Launching ROS nodes..."
ros2 launch teleop_twist_joy teleop-launch.py
#ros2 launch wrapper launch.py # This is our combined wrapper package
