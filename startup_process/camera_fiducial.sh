#!/bin/bash
source /home/threewatt-lp/.bashrc
source /opt/ros/melodic/setup.bash
source /home/threewatt-lp/catkin_ws/devel/setup.bash
export ROS_MASTER_URI=http://localhost:11311
export ROS_HOSTNAME=localhost

roslaunch aruco_detect aruco_detect.launch 
