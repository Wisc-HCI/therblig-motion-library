#!/usr/bin/env python

from actions import ActionHandler
import rospy
from moveit_commander import RobotCommander, os, PlanningSceneInterface, roscpp_initialize, roscpp_shutdown
import sys
import time
import random

def grip_timer():

    node_name = 'mico_planner'
    group_name = 'arm'
    planner_name = 'RRTstarkConfigDefault'
    ee_link_name = 'mico_link_endeffector'

    roscpp_initialize(sys.argv)
    rospy.init_node(node_name, anonymous=True)

    acHan = ActionHandler(group_name, planner_name, ee_link_name)


    rang = 62
    counter = 0
    timedif = 0
    ave = 0
    evener = 0

    #open file
    f = open("gripper_timing.txt", "w")

    f.write("Gripper Action Times \n")
    f.write("Range\t: Time\n")

    #loop through every range
    while(rang <= 100):
            
        #check if done with this range
        if (counter + rang > 100):
 
           #check evener (makes the early ranges run more)
           if (evener < 5):
               counter = 0
           else:
               #get average
               ave = ave / (evener)      

               #write to file
               f.write(str(rang) + "\t: " + str(ave)  + "\n")
               rang = rang + 1
               counter = 0
               ave = 0
               evener = 0
        else:
       
           #go to current start location
           acHan.Grasp(4, counter, 1.0)

           #add to average
           ave = ave + moveTime(counter + rang, acHan)
    
           counter = counter + 3
           evener = evener + 1

    
    f.close()

    rospy.signal_shutdown("Done")
    os._exit(0)
    roscpp_shutdown()

#get timing for a move
def moveTime(x, han):
    s = time.time()
    han.Grasp(4,x,1.0)
    f = time.time()
    return f - s


if __name__ == '__main__':

    grip_timer()
