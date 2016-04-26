#!/usr/bin/env python

from actions import ActionHandler
import rospy
from moveit_commander import RobotCommander, os, PlanningSceneInterface, roscpp_initialize, roscpp_shutdown
import sys
from geometry_msgs.msg import PoseStamped
import moveit_msgs

node_name = 'mico_planner'
group_name = 'arm'
planner_name = 'RRTstarkConfigDefault'
ee_link_name = 'mico_link_endeffector'


roscpp_initialize(sys.argv)
rospy.init_node(node_name, anonymous=True)

acHan = ActionHandler(group_name, planner_name, ee_link_name)

scene = PlanningSceneInterface()

rospy.sleep(1)




p = PoseStamped()
p.header.frame_id = acHan.planning_frame()
p.pose.position.x = 0.5
p.pose.position.y = 0.0
p.pose.position.z = 0.0
p.pose.orientation.w = 1.0
#size = [0.1,0.1,0.1]
#scene.remove_world_object("1")

#x = scene.add_box("1", p, size)


pos = acHan.current_jointState()
print(pos)
pos.position[0] = pos.position[0] + 0.5

acHan.Transport_Empty(4, p)

rospy.signal_shutdown("Done")
os._exit(0)
roscpp_shutdown()





