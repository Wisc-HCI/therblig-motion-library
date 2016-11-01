import sys
import rospy
from moveit_commander import RobotCommander, os, PlanningSceneInterface, roscpp_initialize, roscpp_shutdown
import std_msgs.msg

############### ROS setup #######################
node_name = "mico_force_control"
roscpp_initialize(sys.argv)
rospy.init_node(node_name, anonymous=True)

 
rospy.sleep(1)




pub = rospy.Publisher('mico_arm/Forcecontrol', std_msgs.msg.Bool, queue_size=10)
rospy.sleep(1)

toggle = False
pub.publish(data=toggle)

loop = True
while loop :
        userIn = raw_input("Force control off, to toggle press t, q to exit: ")

        if userIn == 't':
                toggle = toggle ^ True
                print "forceControl on: " + str(toggle)
                pub.publish(data=toggle)
        elif userIn == 'q':
                loop = False
