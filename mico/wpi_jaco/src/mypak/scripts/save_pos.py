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

rospy.sleep(1)

js = acHan.current_jointState()
acHan.Transport_Empty(4, js)


f = open("saved_pos.txt", "w")

f.write(" >NAME\t>POSTION\n")

done = False

while(not done):
     
    inp = raw_input("Enter GraspNAME POSITION to save a grasp move, MoveNAME to save a move commane, or q to Quit > ")

    if (inp == "q"):
         done = True
    elif "Move" in inp :
         p = acHan.current_joints()
         f.write(" >" + inp + "\t>" + str(p) + "\n")
    elif "Grasp" in inp:
         inp = inp.split(" ")
         f.write(" >" + inp[0] + "\t>" + inp[1] + "\n") 


f.close()

rospy.signal_shutdown("Done")
os._exit(0)
roscpp_shutdown()





