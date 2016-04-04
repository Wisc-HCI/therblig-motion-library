#! /usr/bin/python
import roslib
roslib.load_manifest('rospy')
roslib.load_manifest('actionlib')
roslib.load_manifest('pr2_controllers_msgs')

import rospy
import actionlib
from actionlib_msgs.msg import *
from pr2_controllers_msgs.msg import *

rospy.init_node('move_the_gripper', anonymous=True)

# CHOOSE LEFT OR RIGHT GRIPPER
client = actionlib.SimpleActionClient(
    'l_gripper_controller/gripper_action', Pr2GripperCommandAction)
#	'r_gripper_controller/gripper_action', Pr2GripperCommandAction)
client.wait_for_server()

client.send_goal(Pr2GripperCommandGoal(
		# MODIFY HERE:  position by meters, limits = [0.01 to 0.095]
        Pr2GripperCommand(position = 0.055, max_effort = -1)))  
client.wait_for_result()

result = client.get_result()
did = []
if client.get_state() != GoalStatus.SUCCEEDED:
    did.append("failed")
else:
    if result.stalled: did.append("stalled")
    if result.reached_goal: did.append("reached goal")
print ' and '.join(did)