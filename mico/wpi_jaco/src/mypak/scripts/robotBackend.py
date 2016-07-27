#!/usr/bin/env python

import PGraph
from ZODB import FileStorage, DB
import transaction
import forceControlWrapper
from actions import ActionHandler
import rospy
from moveit_commander import RobotCommander, os, PlanningSceneInterface, roscpp_initialize, roscpp_shutdown
import sys
import roslib; roslib.load_manifest('wpi_jaco_msgs')
import geometry_msgs.msg
from wpi_jaco_msgs.msg import authoring, ArmNode

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

# get force control wrapper
fc = forceControlWrapper.ForceControl()

def callback(data):
    print data
    expression = data.expression
    nodeids = data.nodeids

    # go to arm position
    if expression == 0:
        print "moving to: " + str(data.nodeids[0])
        pGraph.setCurrNode(nodeids[0], acHan)

    # plan to node from current node
    elif expression == 1:
        print "planning from " + pGraph.getCurrNode().getName() + " to " + pGraph.getNode(nodeids[0]).getName()
        pGraph.makePath(nodeids[0], acHan)

    # move from current node to specified node
    elif expression == 2:
        print "moving from " + pGraph.getCurrNode().getName() + " to " + pGraph.getNode(nodeids[0]).getName()
        pGraph.moveTo(nodeids[0], acHan)

def callbacktwo(data):
    print data
    print "adding node" + data.name
    pGraph.addNode(data.ID, data.name, acHan)

while True:
    rospy.Subscriber("communication", authoring, callback)
    rospy.Subscriber("nodedata", ArmNode, callbacktwo)





