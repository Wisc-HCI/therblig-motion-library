#!/usr/bin/env python

from actions import ActionHandler
import rospy
from moveit_commander import RobotCommander, os, PlanningSceneInterface, roscpp_initialize, roscpp_shutdown
import sys
import geometry_msgs.msg

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

def callback(data):
    pose = data
    print pose

while True:

    # listen for pose data
    rospy.Subscriber("joint_position_remote", geometry_msgs.msg.Pose, callback)
    
    

