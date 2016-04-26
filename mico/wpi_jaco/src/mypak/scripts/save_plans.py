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

f = 0

for arg in sys.argv:
     f = arg  
     print(f)


plans = []
names = []

t = open(str(f), "r")

for line in t:
    out = line.split(">")
 
    if (out[1] == "NAME\t"):
         print("Start")

    else:

        name = out[1][:-1]

        if "Grasp" in name:
             pos = out[2][:-1]
             pos = int(pos)

             plans.append(pos)
             names.append(name[5:])
             acHan.Grasp(4, pos, 1.0)

        elif "Move" in name:
             joints = out[2][1:-2]
             joints = joints.split(",")

             for x in range(0, len(joints)):
                  joints[x] = float(joints[x])

             pl = acHan.plan(joints)
             plans.append(pl)
             names.append(name[4:])
             acHan.execute_plan(pl)
             rospy.sleep(1)
             acHan.set_start()

r = open("saved_plans.txt", "w")

i = 0
for p in plans:
    r.write("PLAN : " + str(names[i]) + " >\n" + str(p) + "\n")
    i = i + 1        

t.close()
r.close()

rospy.signal_shutdown("Done")
os._exit(0)
roscpp_shutdown()





