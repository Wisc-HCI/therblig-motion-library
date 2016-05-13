#!/bin/bash

###
# Use this to easily launch the background code needed to control the arm.
# This will launch RViz, roscore, and more. Leave it running in the background


#Source the terminal
echo "Source.."
source ~/Documents/John/mico/wpi_jaco/devel/setup.bash
cd ~/Documents/John/mico/wpi_jaco/
sleep 1

#Launch the RViz simulator
echo "Launch.."
roslaunch mico_moveit_config path_planning.launch
