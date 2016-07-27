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

def toPose(poseStamped):
    pose = geometry_msgs.msg.Pose()
    pose.orientation.x = poseStamped.orientation.x
    pose.orientation.y = poseStamped.orientation.y
    pose.orientation.z = poseStamped.orientation.z
    pose.orientation.w = poseStamped.orientation.w

    pose.position.x = poseStamped.position.x
    pose.position.y = poseStamped.position.y
    pose.position.z = poseStamped.position.z
    return pose

#set up pose state publisher
pub = rospy.Publisher('joint_position_inbox', geometry_msgs.msg.Pose, queue_size=10)
rospy.Rate(10)

while True:
    # publish current pose
    rospy.loginfo(acHan.current_pose().pose)
    pub.publish(acHan.current_pose().pose)

    # listen for pose data
    #rospy.Subscriber("joint_position_remote", geometry_msgs.msg.Pose(), callback)


