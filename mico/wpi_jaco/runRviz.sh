#!/bin/bash

###
# Use this to easily launch the background code needed to control the arm.
# This will launch RViz, roscore, and more. Leave it running in the background


#Source the terminal
echo "Source.."

# set these paths to the relevant paths on your machine
source ~/PycharmProjects/therblig-motion-library/mico/wpi_jaco/devel/setup.bash
cd ~/PycharmProjects/therblig-motion-library/mico/wpi_jaco/
sleep 1

#Launch the RViz simulator
echo "Launch.."
roslaunch mico_moveit_config path_planning.launch
