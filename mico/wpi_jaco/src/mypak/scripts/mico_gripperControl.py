#!/usr/bin/env python

__author__ = 'drakita'

###
# A tool borrowed from another HCI group. This file defines a MicoGripperControl Object and has functions for controlling the mico gripper. 
# Used by the ActionHandler object in actions.py

import sys
import rospy
import actionlib
from control_msgs.msg import GripperCommandAction, GripperCommandGoal

class MicoGripperControl:
    def __init__(self):
        name = 'mico_arm/fingers_controller/gripper'
        self.client = actionlib.SimpleActionClient(name, GripperCommandAction)
        server_up = self.client.wait_for_server(rospy.Duration(30.0))
        if not server_up:
            rospy.logerr("Server not online!")
            rospy.signal_shutdown("Server not online!")
            sys.exit(1)

        self.goal = GripperCommandGoal()


    def closeGrip(self):
        #max is 6400
        self.goal.command.position = 5250.0
        self.goal.command.max_effort = 1.0
        self.client.send_goal(self.goal)

    def openGrip(self):
        self.goal.command.position = 2625.0
        self.goal.command.max_effort = 1.0
        self.client.send_goal(self.goal)

    def openGripFull(self):
        self.goal.command.position = 0.0
        self.goal.command.max_effort = 1.0
        self.client.send_goal(self.goal)

    def setGripTo(self, pos, eff):
        self.goal.command.position = pos
        self.goal.command.max_effort = eff
        self.client.send_goal(self.goal)

    def wait(self):
        timeout = rospy.Duration(7.0)
        finish = self.client.wait_for_result(timeout)
        result = (self.client.get_result().reached_goal == True)

        #verify result
        if all([finish, result]):
            return True
        else:
            rospy.logwarn("gripper action timeout.")
            return False

    def stop(self):
        if (self.client.gh is not None and self.client.get_state() == actionlib.GoalStatus.ACTIVE):
            self.client.cancel_goal()
        rospy.sleep(0.5)


if __name__ == '__main__':
    rospy.init_node('mico_gripper_control')
    gripper = MicoGripperControl()
    gripper.closeGrip()
    rospy.on_shutdown(gripper.stop)
    if not rospy.is_shutdown():
        gripper.openGrip()
        rospy.loginfo(gripper.client.get_state())
        result = gripper.wait()
    rospy.loginfo("Result: " + str(result))









