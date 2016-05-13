#!/usr/bin/env python

###
# A simple old file used to test getting plans from files

from actions import ActionHandler
import rospy
from moveit_commander import RobotCommander, os, PlanningSceneInterface, roscpp_initialize, roscpp_shutdown
import sys
from geometry_msgs.msg import PoseStamped
from moveit_msgs.msg import RobotTrajectory
from trajectory_msgs.msg import JointTrajectoryPoint


def go():

    node_name = 'mico_planner'
    group_name = 'arm'
    planner_name = 'RRTstarkConfigDefault'
    ee_link_name = 'mico_link_endeffector'

    roscpp_initialize(sys.argv)
    rospy.init_node(node_name, anonymous=True)

    acHan = ActionHandler(group_name, planner_name, ee_link_name)

    rospy.sleep(1)

    files = []
    lant = -1
    loc = -1
    ori = -1

    #get input
    has_input = False
    while(not has_input):
        inp = raw_input("Enter Lantern to pick, and location to place (Format = Lantern# Location# Orientation#) > ")

        inp = inp.split(" ")

        if len(inp) == 3:

            for n in inp:
                if (n == "0") or (n == "1") or (n == "2") or (n == "3") or (n == "4"):
                    has_input = True
                else:
                    has_input = False
                    break 

            lant = inp[0]
            loc = inp[1]
            ori = inp[2]

    #get files
    files.append("StartupPlan")
    files.append("Release")
    files.append("TransEmpty_" + str(lant) + "_" + str(ori))
    files.append("Grasp_80")
    files.append("TransLoadedUp_" + str(lant) + "_" + str(ori))
    files.append("TransLoadedDown_" + str(loc) + "_" + str(ori))
    files.append("Grasp_30")
    files.append("TransEmptyRetract_" + str(loc) + "_" + str(ori))
    files.append("Release")

    for f in files:

        t = open("plans/" + str(f), "r")

        runFiles(t, acHan)

        t.close()




def runFiles(f, acHan):

    plans = f.read().split("PLAN : ")
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


if __name__ == '__main__':
    go()

rospy.signal_shutdown("Done")
os._exit(0)
roscpp_shutdown()


