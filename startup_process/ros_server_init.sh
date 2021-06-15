#!/bin/bash
source /home/clavis/.bashrc
source /opt/ros/melodic/setup.bash
source /home/clavis/catkin_ws/devel/setup.bash
export ROS_MASTER_URI=http://localhost:11311
export ROS_HOSTNAME=localhost

roslaunch move_arm TCPserver.launch
