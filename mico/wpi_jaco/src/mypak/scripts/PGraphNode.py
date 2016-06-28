#!/usr/bin/env python

# a simple persistent graph node
# Author: Marshall Mueller, 6/22/2016
# email: mashymue ( a t ) gmail ( d o t ) com

from persistent import Persistent


class PGraphNode(Persistent):

    def __init__(self, ID, name, pos):
        self.paths = {}
        self.ID = ID
        self.name = name
        self.pos = pos
        self.masterPath = {}

    def getPos(self):
        '''
        getPos gets the position of this position node

        @return: the joint position data of this node
        '''

        return self.pos

    def getID(self):
        '''
        getID gets the ID of this position Node

        @return: the Position node's ID
        '''

        return self.ID

    def getName(self):
        '''
        getName gets the name of this position node

        @return: the position node's ID
        '''

        return self.name

    def setPath(self, pGraphNodeID, path):
        '''
        makePath creates a path from one position to another

        @param pGraphNodeID: the position to make a path to
        @return: True if path made, false if path exists
        '''

        if pGraphNodeID in self.paths:
            print "Path exists"
            return False
        else:
            self.paths[pGraphNodeID] = path
            self._p_changed = True
            print "Path made to: " + str(pGraphNodeID)
            return True

    def getPath(self, pGraphNodeID):
        '''
        getPath gets the path from this node to another

        @param pGraphNodeID: the node to get the path to
        @return: the path if it exists, otherwise None
        '''

        if pGraphNodeID in self.paths:
            return self.paths[pGraphNodeID]
        else:
            return None

    def getPaths(self):
        '''
        getPaths gets the paths this node contains

        @return: the paths this node can move to
        '''

        return self.paths

    def removePath(self, pGraphNodeID):
        '''
        removePath removes the path to the position

        @param pGraphNodeID: the ID of the position
        @return: true if the path was removed or false if it didn't exist
        '''

        if pGraphNodeID in self.paths:
            print "Removing path between " + str(self.ID) + " and " + str(pGraphNodeID)
            del self.paths[pGraphNodeID]
            self._p_changed = True
            return True
        else:
            print str(pGraphNodeID) + " does not have a path from " + str(self.ID)
            return False

    def setMasterPath(self, pGraphNodeID, pathList):
        '''
        setMasterPath adds a master path from one node stepping through one or more before reaching the final node

        @param pGraphNodeID: the destination position node
        @param pathList: the list of paths to take
        @return:
        '''

        self.masterPath[pGraphNodeID] = pathList
        self._p_changed = True

    def hasMasterPath(self, pGraphNodeID):
        '''
        Determines whether a master path exists to the desired node

        @param pGraphNodeID: the destination node
        @return: true if master path exists, false otherwise
        '''

        if pGraphNodeID in self.masterPath:
            return True
        else:
            return False

    def getMasterPath(self, pGraphNodeID):
        '''
        getMasterPath returns the path list to the desired node

        @param pGraphNodeID: the end position node
        @return: the path list, empty list if it doesn't exist
        '''

        if pGraphNodeID in self.masterPath:
            return self.masterPath[pGraphNodeID]
        else:
            return []

    def removeMasterPath(self, pGraphNodeID):
        '''
        removes the master path between two nodes, will leave all the individual paths, only removes the master path list

        @param pGraphNodeID: the path node to have the path removed from
        @return: true if removed, false if path didn't exist
        '''

        if pGraphNodeID in self.masterPath:
            del self.masterPath[pGraphNodeID]
            return True
        else:
            return False