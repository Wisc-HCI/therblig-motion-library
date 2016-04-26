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

f = open("saved_pos.txt", "w")

f.write(" >NAME\t>POSTION\n")

done = False

while(not done):
     
    inp = raw_input("Enter name of Position or q to Quit > ")

    if (inp == "q"):
         done = True
    else :
         p = acHan.current_joints()
         
         f.write(" >" + inp + "\t>" + str(p) + "\n")


f.close()

t = open("saved_pos.txt", "r")

for line in t:
    out = line.split(">")
 
    if (out[1] == "NAME\t"):
         print("Begin replay")

    else:

        name = out[1][:-1]
        joints = out[2][1:-2]
        joints = joints.split(",")

        for x in range(0, len(joints)):
             joints[x] = float(joints[x])

        print(name + " : " + str(joints))
        
        acHan.Transport_Empty(4, joints)

t.close()


rospy.signal_shutdown("Done")
os._exit(0)
roscpp_shutdown()





