#!/bin/bash
#source /opt/ros/indigo/setup.bash
#export ROS_MASTER_URI=http://localhost:11311
#export ROBOT=sim
#export ROS_PACKAGE_PATH=~/Documents/John/wpi_jaco:$ROS_PACKAGE_PATH

# Very old initialization tool used before we switch to MoveIt
# Feel free to delete it

echo "start script.."

#echo "Initialize MICO arm"
source ~/Documents/John/wpi_jaco/devel/setup.bash
cd ~/Documents/John/wpi_jaco/src/wpi_jaco_wrapper/launch
roslaunch arm.launch 


