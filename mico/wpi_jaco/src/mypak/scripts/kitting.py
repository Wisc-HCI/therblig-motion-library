#!/usr/bin/env python

###
# Can ignore this file. A simple tool for running a group of plans by listing them in order.



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

    #get files
    files.append("StartupPlan")
    files.append("Release")
    
    files.append("TransEmpty_1_0")
    files.append("Grasp_80")
    files.append("TransLoadedUp_1_0")
    files.append("TransLoadedDown_1_0")
    files.append("Grasp_30")
    files.append("TransEmptyRetract_1_0")
    files.append("Release")
    
    files.append("TransEmpty_B1_1")
    files.append("Grasp_100")
    files.append("TransLoaded_B1_1")
    files.append("Grasp_30")
    files.append("TransEmptyRetract_B1_1")
    files.append("Release")
    #files.append("TransEmpty_3_1")
    #files.append("Grasp_80")
    #files.append("TransLoadedUp_3_1")
    #files.append("TransLoadedDown_3_1")
    #files.append("Grasp_30")
    #files.append("TransEmptyRetract_3_1")
    #files.append("Release")
    
    #files.append("TransEmpty_2_0")
    #files.append("Grasp_80")
    #files.append("TransLoadedUp_2_0")
    #files.append("TransLoadedDown_2_0")
    #files.append("Grasp_30")
    #files.append("TransEmptyRetract_2_0")
    #files.append("Release")
   
    #files.append("TransEmpty_B2_1")
    #files.append("Grasp_100")
    #files.append("TransLoaded_B2_1")
    #files.append("Grasp_30")
    #files.append("TransEmptyRetract_B2_1")
    #files.append("Release") 
    #files.append("TransEmpty_4_1")
    #files.append("Grasp_80")
    #files.append("TransLoadedUp_4_1")
    #files.append("TransLoadedDown_4_1")
    #files.append("Grasp_30")
    #files.append("TransEmptyRetract_4_1")

    #get plans
    plans = []

    for f in files:

        t = open("plans/" + str(f), "r")

        p = getPlans(t, acHan)

        i = 0
        while(i < len(p)):
            plans.append(p[i])
            i = i + 1

        t.close()


    count = 0
    while(count < 1):
        runPlans(plans, acHan)  
        count = count + 1 


def runPlans(plans, acHan):
    
    count = 0

    while(count < len(plans)):

        #rospy.sleep(3)

        p = plans[count]

        if not type(p) == RobotTrajectory:
            acHan.Grasp(4, float(p), 1.0)
        else :
            acHan.execute_plan(p)

        count = count + 1



def getPlans(f, acHan):

    file_plans = []

    plans = f.read().split("PLAN : ")
    plans = plans[1:]

    for p in plans:
        name_plan = p.split(' >\n')
        #print(name_plan[0])

        el = name_plan[1].split('\n')    

        if (len(el) < 5):
            file_plans.append(el[0])
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
            
            file_plans.append(x)    
    
    return file_plans
    
            

if __name__ == '__main__':
    go()

rospy.signal_shutdown("Done")
os._exit(0)
roscpp_shutdown()


