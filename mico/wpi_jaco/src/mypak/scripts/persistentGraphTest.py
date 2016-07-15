#!/usr/bin/env python

# A program to test the PGraph
# Author: Marshall Mueller, 6/22/2016
# email: mashymue ( a t ) gmail ( d o t ) com

import PGraph
from ZODB import FileStorage, DB
import transaction
from actions import ActionHandler
import rospy
from moveit_commander import RobotCommander, os, PlanningSceneInterface, roscpp_initialize, roscpp_shutdown
import sys

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

# Database setup
storage = FileStorage.FileStorage("pGraph.fs")
db = DB(storage)
conn = db.open()
pGraphDB = conn.root()



if not pGraphDB.has_key("graph"):
    pGraphDB["graph"] = PGraph.PGraph()

# Variables
pGraph = pGraphDB["graph"]

# clear persistent program memory
pGraph.setCurrNodeNone()

while(True):

    userIn = raw_input("\nEnter a command: ")

    userIn = userIn.split(" ")

    # add a node
    if userIn[0] == "add" and len(userIn) == 3:
        print "Adding node for " + userIn[1]
        try:
            pGraph.addNode(int(userIn[1]), userIn[2], acHan)
            pGraph._p_changed = True
            transaction.commit()
        except ValueError:
            print "Use integer values only for node ID's"

    # remove a node
    elif userIn[0] == "rm" and len(userIn) == 2:
        print "Removing node: " + userIn[1]
        try:
            pGraph.removeNode(int(userIn[1]))
            transaction.commit()
        except ValueError:
            print "Use integer values only for node ID's"

    # get a node
    elif userIn[0] == "get" and len(userIn) == 2:
        try:
            if pGraph.hasNode(int(userIn[1])):
                print pGraph.getNode(int(userIn[1])).getName()
            else:
                print "Node " + userIn[1] + " does not exist"
        except ValueError:
            print "Use integer values only for node ID's"

    # make a path
    elif userIn[0] == "makepath" and len(userIn) == 3:
        try:
            print "making path from " + pGraph.getCurrNode().getName() + " to " + userIn[1]
            try:
                pGraph.makePath(int(userIn[2]), acHan)
                transaction.commit()
            except ValueError:
                print "Use integer values only for node ID's"
        except AttributeError:
            print "No current node set, please move to start node"

    # get a path from one node to another
    elif userIn[0] == "getpath" and len(userIn) == 3:
        try:
            print pGraph.getPath(int(userIn[1]), int(userIn[2]))
        except ValueError:
            print "Use integer values only for node ID's"

    # get a list of paths from a node
    elif userIn[0] == "getpaths" and len(userIn) == 2:
        try:
            if pGraph.hasNode(int(userIn[1])):
                for node in pGraph.getNode(int(userIn[1])).getPaths():
                    print node
        except ValueError:
            print "Use integer values only for node ID's"

    # remove a path
    elif userIn[0] == "rmpath" and len(userIn) == 3:
        try:
            if pGraph.hasNode(int(userIn[1])) and pGraph.hasNode(int(userIn[1])):
                pGraph.removePath(int(userIn[1]), int(userIn[2]))
                transaction.commit()
                print "Path removed"
        except ValueError:
            print "Use integer values only for node ID's"

    # show all the nodes in the graph
    elif userIn[0] == "list" and len(userIn) == 1:
        print pGraph.listNodes()

    # move from the current node to another
    elif userIn[0] == "move" and len(userIn) == 2:
        try:
            if pGraph.moveTo(int(userIn[1]), acHan):
                print "Path exists, moved!"
            else:
                print "Path or node doesn't exist"
        except ValueError:
            print "Use integer values only for node ID's"

    # go to a node
    elif userIn[0] == "go" and len(userIn) == 2:
        try:
            pGraph.setCurrNode(int(userIn[1]), acHan)
        except ValueError:
            print "Use integer values only for node ID's"

    # see the current node
    elif userIn[0] == "curr" and len(userIn) == 1:
        try:
            print pGraph.getCurrNode().getName()
        except AttributeError:
            print "None"

    # quit the program
    elif userIn[0] == "q" and len(userIn) == 1:
        print "Exiting"
        roscpp_shutdown()
        sys.exit(0)

    # make a path consisting of multiple trajectories
    elif userIn[0] == "makemaster" and len(userIn) > 3:
        print "Making master plan"
        path = []
        for i in xrange(1, len(userIn)):
            try:
                path.append(int(userIn[i]))
                transaction.commit()
            except ValueError:
                print "Use integer values only for node ID's"

        if pGraph.makeMasterPath(path, acHan):
            print "Path made successfully"
        else:
            print "Path exists or some nodes do not exist"

    # get the master path
    elif userIn[0] == "getmaster" and len(userIn) == 3:
        try:
            if pGraph.getNode(int(userIn[1])).hasMasterPath(int(userIn[2])):
                print pGraph.getNode(int(userIn[1])).getMasterPath(int(userIn[2]))
            else:
                print "No master path exists between " + userIn[1] +" and " + userIn[2]
        except ValueError:
            print "Use integer values only for node ID's"

    # perform a grasp action
    elif userIn[0] == "grasp" and len(userIn) == 2:
        # validate that second argument is a float 0 <= x <= 100
        try:
            graspVal = float(userIn[1])
            if graspVal >= 0 and graspVal <= 100:
                acHan.Grasp(4, graspVal, 1)
            else:
                print "value was not in acceptable bounds for grasping"
        except ValueError:
            print "Value for grasping must be a floating point number"



    # default
    else:
        print "Invalid command"
