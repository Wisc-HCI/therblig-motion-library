#! /usr/bin/python
import time
import roslib
roslib.load_manifest('rospy')
roslib.load_manifest('geometry_msgs')
import rospy
from geometry_msgs.msg import *

rospy.init_node('move_the_base', anonymous=True)

pub = rospy.Publisher('base_controller/command', Twist)
time.sleep(1)

movement = Twist()

# SET VELOCITY HERE
movement.linear.x = 1.5
movement.linear.y = -1.0
movement.angular.z = -0.1
start_time = rospy.get_rostime()

# SET DURATION HERE
while rospy.get_rostime() < start_time + rospy.Duration(2.0):
    pub.publish(movement)
    time.sleep(0.01)
pub.publish(Twist())  # Stop