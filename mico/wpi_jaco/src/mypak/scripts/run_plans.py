#!/usr/bin/env python

###
# Takes a file full of plans and and runs each plan 

from actions import ActionHandler
import rospy
from moveit_commander import RobotCommander, os, PlanningSceneInterface, roscpp_initialize, roscpp_shutdown
import sys
from geometry_msgs.msg import PoseStamped
from moveit_msgs.msg import RobotTrajectory
from trajectory_msgs.msg import JointTrajectoryPoint


##Initialize steps
node_name = 'mico_planner'
group_name = 'arm'
planner_name = 'RRTstarkConfigDefault'
ee_link_name = 'mico_link_endeffector'


roscpp_initialize(sys.argv)
rospy.init_node(node_name, anonymous=True)

acHan = ActionHandler(group_name, planner_name, ee_link_name)

rospy.sleep(5)



f = 0

for arg in sys.argv:
     f = arg  

t = open(str(f), "r")

plans = t.read().split("PLAN : ")
plans = plans[1:]

for p in plans:
    name_plan = p.split(' >\n')
    print(name_plan[0])

    el = name_plan[1].split('\n')    


    if (len(el) < 5):
         acHan.Grasp(4, float(el[0]), 1.0)
    else:
         x = RobotTrajectory()
   
         el = p.split('\n')
         #get frame id
         fram_id = el[7].split(": ")[1]
         x.joint_trajectory.header.frame_id = fram_id
         #get joint names
         joints = el[8].split(": ")[1][1:-1]
         joints = joints.split(", ")
         for j in range(0, len(joints)):
              joints[j] = joints[j].split('\'')[1]
         x.joint_trajectory.joint_names = joints

         #get points
         done = False
         counter = 10
         while(not done):
              if ("multi" in el[counter]):
                   done = True
              else:
                   y = JointTrajectoryPoint()

                   #get pos
                   pos = el[counter + 1].split(": ")[1][1:-1]
                   pos = pos.split(", ")
                   for i in range(0, len(pos)):
                        pos[i] = float(pos[i])
                   y.positions = pos
                   #get vel
                   vel = el[counter + 2].split(": ")[1][1:-1]
                   vel = vel.split(", ")
                   for i in range(0, len(vel)):
                        vel[i] = float(vel[i])
                   y.velocities = vel
                   #get acc
                   acc = el[counter + 3].split(": ")[1][1:-1]
                   acc = acc.split(", ")
                   for i in range(0, len(acc)):
                        acc[i] = float(acc[i])
                   y.accelerations = acc
                   #get time
                   st = el[counter + 6].split(": ")[1]
                   et = el[counter + 7].split(": ")[1]
                   y.time_from_start.secs = float(st)
                   y.time_from_start.nsecs = float(et)

                   x.joint_trajectory.points.append(y)    

                   counter = counter + 8
    
         acHan.execute_plan(x)

        
t.close()

rospy.signal_shutdown("Done")
os._exit(0)
roscpp_shutdown()





