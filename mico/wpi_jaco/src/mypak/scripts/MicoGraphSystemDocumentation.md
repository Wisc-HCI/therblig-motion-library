#Mico Graph System 

##Overview
The general functionality is that each node in the graph corresponds to a position of the arm. 
It's a directed graph, where an edge from one node from another corresponds to a path that has been planned between them,
as the arm can only move from one place to another if the path has been planned. 
Each node has a unique integer ID which serves as an identifier and way to reference it.
(There isnt a good reason for it to be an int, so I'm thinking about making it a string rather than always casting strings to ints)


##Issues
A problem with moveit when planning in empty space, is that it may plan a path through an element of the environment.
To avoid this, it is helpful to create intermediate node(s) to create a more predictable path for moveit.
If the environment is modeled, this probably wont be an issue.
Apparently their is a known issue with moveit and mico where it avoids imaginary collisions, so don't be spooked if it 
makes a bizarre plan.

##Setup
Make sure to add this snippet to any python you make as it does the ROS node setup, as well as database setup, 
pGraph is the reference to the graph in this snippet, and how you would do operations on the graph.
```
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
```

For a sample of how this code can be used, look at persistentGraphTest.py, 
which is a simple command line program to make and manipulate a graph

#Code
The backbone consists in two files, PGraph and PGraphNode, the P standing for persistant in that the graph is saved into a ZODB
database, which makes it very easy to work with. 

##PGraph.py
This consists of the graph functionality and making connections between nodes.

####getCurrNode(self)
Returns the current node that the arm is at, None if no curr node has been set.

####setCurrNode(self, pGraphNodeID, acHan)
Sets the current node to the specified ID, this will also move the arm to that node. 
Returns true if successful, false if node doesn't exist.

####setCurrNodeNone(self)
Sets the current node to None, usually called on startup to clear the previous run's current node.

####hasNode(self, pGraphNodeID)
If there is a node in the graph with that ID, returns true, false otherwise.

####addNode(self, pGraphNodeID, name, acHan)
Adds a Node with the specified ID and name, if the ID is already used it returns false, true if succesful.

####removeNode(self, pGraphNodeID)
Removes the Node and all paths attributed to it. Currently very inefficient in a large graph as it iterates through all nodes,
but that probably won't be an issue for us. Returns True if removed, false if it doesn't exist.

####getNode(self, pGraphNodeID)
If the node exists, return the node object, otherwise return false.

####makePath(self, nodeToID, acHan)
Makes a path from the current node to the specified node, if the node doesn't exist, 
or the current node is not set, it returns false, otherwise returns true.

####makeMasterPath(self, path, acHan)
Makes a master path from one node to another, this is used in cases where moveit made a plan through an obstacle, so it is 
necessary to make multiple moves to get to the destination, usually close to a table or other object. The path is a list from start 
node to end node of their ID's

####getPath(self, nodeFromID, nodeToID)
Returns the path plan between the two specified nodes, mostly for use with the action handler to execute a plan.

####removePath(self, nodeFromID, nodeToID)
Removes the path between the specified nodes, returns true if removed, false if no path exists.

####listNodes(self)
Returns a dictionary of all the nodes with the key as the ID and value as the name.

####moveTo(self, pGraphNodeID, acHan)
Moves from the current node to the specified node, returns true if path exists and able to move, 
false if node doesn't exist, current node is not set, or path doesn't exist.

##PGraphNode.py
This describes the nodes and what functions can be applied on them. 
Nodes contain: 
ID, the reference value for the node.
A list of paths, which is a dictionary that has the destination Node ID as the key and the path plan as the value.<br/> 
Name is a way to describe the node and give it human significance.<br/>
Pos is the the joint position data of the node.<br/>
MasterPath is a dictionary of of the master paths, which contains the destination node ID as the key,
and the list of node ID's from first node to travel to, to the last node that the arm moves to.<br/>

**Note about master paths:** They don't combine the path plans between all the nodes it steps through, but rather creates and stores the 
paths between the intermediate nodes and the master path list serves as a way to know which individual paths to take, 
and moves through them sequentially.

####getPos(self)
Returns the joint position data of the Node.

####getID(self)
Returns the node's ID.

####getName(self)
Returns the node's name.

####setPath(self, pGraphNodeID, path)
Adds a path between the end node and this node, with the path being the plan generated by the moveit.
Returns True if added, false if already existed.

####getPath(self, pGraphNodeID)
Returns the path to the referenced node, if path doesn't exist it returns None.

####getPaths(self)
Returns the dictionary of paths.

####removePath(self, pGraphNodeID)
Removes a path between this node and the referenced node, true if path exists and was removed, false if path doesn't exist.

####setMasterPath(self, pGraphNodeID, pathList)
Add's a master path to the dictionary of master paths.

####hasMasterPath(self, pGraphNodeID)
Returns true if a master path exists from this node to the referenced node, false otherwise.

####getMasterPath(self, pGraphNodeID)
Returns the path list of the master path to the referenced node, empty list if no master path exists.

####removeMasterPath(self, pGraphNodeID)
Removes the master path between this node and the referenced node. Returns true if the path exists and was removed,
false otherwise.