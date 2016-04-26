#!/bin/bash

echo "Source.."
source ~/Documents/John/mico/wpi_jaco/devel/setup.bash
cd ~/Documents/John/mico/wpi_jaco/
sleep 1

echo "Launch.."
roslaunch mico_moveit_config path_planning.launch
