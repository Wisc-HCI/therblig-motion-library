#!/usr/bin/env python

# A persistent graph utilized for controlling paths of the mico arm, the curr node represents the current position
# of the arm
# Author: Marshall Mueller, 6/22/2016
# email: mashymue ( a t ) gmail ( d o t ) com

import PGraphNode
from persistent import Persistent
from BTrees import OOBTree

class PGraph(Persistent):
    def __init__(self):
        self.pGraph = OOBTree.OOBTree()
        self.currNode = None

    def getCurrNode(self):
        '''
        getCurrNode returns the current node

        @return: the current node, None if it isn't set or the arm is not at a node
        '''

        '''
        if self.currNode.getPos() == acHan.current_joints():
            return self.currNode
        else:
            return None
        '''
        return self.currNode

    def setCurrNode(self, pGraphNodeID, acHan):
        '''
        setCurrNode sets the current node to the specified ID

        @param pGraphNodeID: the position node to set
        @return: true if successful, false otherwise
        '''

        if pGraphNodeID in self.pGraph:
            self.currNode = self.pGraph[pGraphNodeID]
            if acHan.current_joints() != self.currNode.getPos():
                acHan.set_start()
                print "planning move"
                plan = acHan.plan(self.currNode.getPos())
                print "executing move"
                acHan.execute_plan(plan)
            return True
        else:
            return False

    def setCurrNodeNone(self):
        '''
        setCurrNodeNone should be called on init to clear what is leftover and prevent misuse of the program


        @return: void
        '''

        self.currNode = None

    def hasNode(self, pGraphNodeID):
        '''
        hasNode determines if the node exists in the graph

        @param pGraphNodeID: the node in question
        @return: True if exists, false otherwise
        '''
        if pGraphNodeID in self.pGraph:
            return True
        else:
            return False

    def addNode(self, pGraphNodeID, name, acHan):
        '''
        addNode adds a node to the graph for the position

        @param pGraphNodeID: the position ID to the graph
        @return: true if the node was added, false if it already exists
        '''

        if pGraphNodeID in self.pGraph:
            print "Node already exists for " + str(pGraphNodeID)
            return False
        else:
            newNode = PGraphNode.PGraphNode(pGraphNodeID, name, acHan.current_joints())
            self.pGraph[pGraphNodeID] = newNode
            self._p_changed = True
            print "Added node: " + str(pGraphNodeID)
            return True

    def removeNode(self, pGraphNodeID):
        '''
        removeNode removes the node from the graph, and removes all references to it
        @param pGraphNodeID: the position node to remove
        @return: True if all references where removed, false if it didn't exist or had no references
        '''

        removed = False

        if pGraphNodeID in self.pGraph:
            removed = True

            # remove node from graph
            del self.pGraph[pGraphNodeID]

            # remove references
            for key in self.pGraph:
                self.pGraph[key].removePath(pGraphNodeID)
                self.pGraph[key].removeMasterPath(pGraphNodeID)

            self._p_changed = True

        return removed

    def getNode(self, pGraphNodeID):
        '''
        returns the node at the passed in ID

        @param pGraphNodeID: the desired position node ID
        @return: the desired position node
        '''
        if pGraphNodeID in self.pGraph:
            return self.pGraph[pGraphNodeID]
        else:
            return None

    def makePath(self, nodeToID, acHan):
        '''
        makePath makes a path between two positions

        @param nodeToID: end position
        @return: true if the path was made, false if nodes don't exist
        '''

        if self.currNode.getPath(nodeToID) is not None:
            print "path already exists"
            return True
        elif nodeToID in self.pGraph and self.currNode is not None:
            if self.currNode.getPos() != acHan.current_joints():
                acHan.set_start()
                print "Planning move to start location"
                plan = acHan.plan(self.currNode.getPos())
                print "moving to start location"
                acHan.execute_plan(plan)
            acHan.set_start()
            print "making path from " + self.currNode.getName() + " to " + self.pGraph[nodeToID].getName()
            pathPlan = acHan.plan(self.pGraph[nodeToID].getPos())
            self.currNode.setPath(nodeToID, pathPlan)
            self._p_changed = True
            return True
        else:
            print "nodes do not exist"
            return False

    def makeMasterPath(self, path, acHan):
        '''
        makeMasterPath allows the user to abstract a path of smaller paths into one continous path, helpful in cases
        where the large path may run into an obstacle and damage the arm

        @param path: list of nodes including start to finish that will comprise the path
        @param acHan: The action handler to do the planning
        @return: true if successful, false otherwise
        '''

        # make sure nodes exist
        valid  = True
        for node in path:
            if node not in self.pGraph:
                valid = False
                break

        # nodes exist and path doesn't already exist
        if valid and self.pGraph[path[0]].getPath(self.pGraph[path[-1]].getID()) is None:
            # if there is no current location, and the arm is not at the starting location, set the current position
            # to the starting position and move to it

            if self.currNode is None:
                self.currNode = self.pGraph[path[0]]

            if self.currNode.getPos() != acHan.current_joints():
                acHan.set_start()
                print "Planning move to start location"
                plan = acHan.plan(self.currNode.getPos())
                print "moving to start location"
                acHan.execute_plan(plan)

            # CIA: Now what's the next step in your
            # combine list of plans in path to make the master plan
            for i in xrange(1, len(path)):
                # if the path already exists, use that rather than replanning
                currPlan = self.currNode.getPath(path[i])
                if currPlan is not None:
                    print "Plan already exists to " + self.pGraph[path[i]].getName() + ", using that and moving there"
                    acHan.execute_plan(currPlan)
                    # set new position node as current
                    self.currNode = self.pGraph[path[i]]
                else:
                    acHan.set_start()
                    print "Planning to " + self.pGraph[path[i]].getName()
                    planPart = acHan.plan(self.pGraph[path[i]].getPos())
                    # add path between to nodes to the start node's path list
                    self.currNode.setPath(path[i], planPart)
                    # have to move to the next node to plan the next path
                    print "Moving to " + self.pGraph[path[i]].getName()
                    acHan.execute_plan(planPart)
                    self.currNode = self.pGraph[path[i]]

            # add path to start node's master path list
            self.currNode = self.pGraph[path[0]]
            # master path is just a meta list that calls the paths between nodes
            self.currNode.setMasterPath(path[-1], path[1:])
            # set curr node to the end node
            self.currNode = self.pGraph[path[-1]]
            self._p_changed = True
            return True

        else:
            print "Either nodes in path do not exist or path already exist"
            return False


    def getPath(self, nodeFromID, nodeToID):
        '''
        getPath gets the path between two positions

        @param nodeFromID: the starting position
        @param nodeToID: the end position
        @return: the path between the two positions
        '''

        if nodeFromID in self.pGraph and nodeToID in self.pGraph:
            return self.pGraph[nodeFromID].getPath(nodeToID)
        else:
            return "Nodes do not exist"

    def getPaths(self, pGraphNodeID):
        '''
        getPaths gets the paths the passed in position has

        @param pGraphNodeID: the starting position
        @return: all the paths that can be used
        '''

        if pGraphNodeID in self.pGraph:
            return self.pGraph[pGraphNodeID].getPaths()
        else:
            return None

    def removePath(self, nodeFromID, nodeToID):
        '''
        remove the path between two positions

        @param nodeFromID: the starting positions
        @param nodeToID: the end position
        @return: true if removed, false if either node doesn't exist
        '''

        if self.hasNode(nodeFromID) and self.hasNode(nodeToID):
            self.pGraph[nodeFromID].removePath(nodeToID)
            self._p_changed = True
            return True
        else:
            return False

    def listNodes(self):
        '''
        listNodes returns the list of nodes by name
        @return: dictionary of position node ID's and names
        '''

        if len(self.pGraph) > 0:
            nodes = {}
            for key in self.pGraph:
                nodes[self.pGraph[key].getID()] = self.pGraph[key].getName()
            return nodes
        else:
            return None

    def moveTo(self, pGraphNodeID, acHan):
        '''
        moveTo moves from the current node to the desired position

        @param pGraphNodeID: the ID of the position node to move to
        @return: True if move is successful, false if no path exists to the desired position node
        '''

        if self.pGraph[pGraphNodeID].getPos() == acHan.current_joints():
            print "already at " + self.currNode.getName()
            return True
        elif self.currNode is not None and pGraphNodeID in self.pGraph:

            # if the path is a master path, use that
            if self.currNode.hasMasterPath(pGraphNodeID):
                for pathNode in self.currNode.getMasterPath(pGraphNodeID):
                    acHan.set_start()
                    acHan.execute_plan(self.currNode.getPath(pathNode))
                    self.currNode = self.pGraph[pathNode]

            elif self.currNode.getPath(pGraphNodeID) is not None:
                acHan.set_start()
                acHan.execute_plan(self.currNode.getPath(pGraphNodeID))
                self.currNode = self.pGraph[pGraphNodeID]
            else:
                return False
            return True
        else:
            return False
