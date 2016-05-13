#!/usr/bin/env python
import socket
import struct
from actions import ActionHandler
import rospy
from moveit_commander import RobotCommander, os, PlanningSceneInterface, roscpp_initialize, roscpp_shutdown
import sys
from geometry_msgs.msg import PoseStamped
from moveit_msgs.msg import RobotTrajectory
from trajectory_msgs.msg import JointTrajectoryPoint

###
# Takes a list of plans and an action handler as input.
# Executes the list of the plans.
def runPlans(plans, acHan):
    
    count = 0

    while(count < len(plans)):

        p = plans[count]

        if not type(p) == RobotTrajectory:
            acHan.Grasp(4, float(p), 1.0)
        else :
            acHan.execute_plan(p)

        count = count + 1

###
# Takes a file and an action handler as input.
# Returns a list of the plans found in the file.
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

###
# Standard action handler and node setup nedded for all our scripts.
#   Returns an aciotn handler.
def setup_arm():
    #initialize steps
    node_name = 'mico_planner'
    group_name = 'arm'
    planner_name = 'RRTstarkConfigDefault'
    ee_link_name = 'mico_link_endeffector'
    #start node
    roscpp_initialize(sys.argv)
    rospy.init_node(node_name, anonymous=True)
    #get action handler
    acHan = ActionHandler(group_name, planner_name, ee_link_name)
    return acHan

###
# The main loop of this file
#   Creates the socket. Takes an action handler as input.
#   Should recieve therblig messages and translate them into plans to be run by the action handler.
def socket_loop(acHan):

    #create an INET, STREAMing socket
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    #bind the socket to a public host,
    # and a well-known port
    s.bind(('', 9999))
    #become a server socket
    s.listen(5)
    #accept connections from outside
    (c, address) = s.accept()
    
    if c < 0:
        print("Connection Failed.\n"); 
        sys.exit(0)
    else:
        print("Connected to " + str(address))


        ##LISTENING LOOP
        loop = True
        while(loop):

            (message, ad) = c.recvfrom(512);

            print("Next command : ")

            mess_len = len(message)

            print(mess_len)

            if mess_len == 0:
                     
                 header = 0 #mess type is last 4 bytes
   
                 if mess_len >= 15:
                     header = message[0:15]           
                     mess_type = header[11:15]

                     mess_type = struct.unpack("i", mess_type)[0]  

                     print(mess_type)

                     if(mess_type == 0):                          

                         vals = []
                         i = 0

                         while(i < (mess_len/4)):
                             vals[i] = struct.unpack("i", message[4*i:4*i + 4])[0]
                             i = i + 1

                         print(vals)

                     #elif(mess_type == 1):

                     #elif(mess_type == 2):

                     #elif(mess_type == 3):

                     #     	Type	byte count 
                     #TE = 	0	20
                     #G = 	2	8
                     #TL = 	1	12 
                     #R		4	4

                    
                  
            else:
                go()
                s.close()
                return

 

            print("Full message : " + str(message) + "\n") 



    s.close()

###
# The standard script end calls used in all of our scripts.
# This should be called last.
def end():
    rospy.signal_shutdown("Done")
    os._exit(0)
    roscpp_shutdown()



if __name__ == '__main__':
  
    # Build the action handler
    acHan = setup_arm()

    # Start the socket
    socket_loop(acHan)

    # End this script
    end()













