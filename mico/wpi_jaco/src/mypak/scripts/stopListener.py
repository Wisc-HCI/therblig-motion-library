#!/usr/bin/env python

#listens for a stop command and stops the robot

from actions import ActionHandler
import rospy
from moveit_commander import RobotCommander, os, PlanningSceneInterface, roscpp_initialize, roscpp_shutdown
import sys

############### ROS setup #######################
node_name = 'mico_planner'
group_name = 'arm'
planner_name = 'RRTstarkConfigDefault'
ee_link_name = 'mico_link_endeffector'

roscpp_initialize(sys.argv)
rospy.init_node(node_name, anonymous=True)

acHan = ActionHandler(group_name, planner_name, ee_link_name)

rospy.sleep(1)
#################################################

while True:
    userIn = raw_input("stop the robot? (y/n): ")
    if userIn == 'y':
        acHan.stop()
