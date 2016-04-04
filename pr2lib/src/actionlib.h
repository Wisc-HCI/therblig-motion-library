#ifndef ACTIONLIB_H_
#define ACTIONLIB_H_
/*
Header file for sending messages to PR2
*/
#include <pr2_controllers_msgs/Pr2GripperCommandAction.h>
#include <move_base_msgs/MoveBaseAction.h>
#include <actionlib/client/simple_action_client.h>
#include <tf/transform_listener.h>

typedef actionlib::SimpleActionClient<pr2_controllers_msgs::Pr2GripperCommandAction> GripperClient;
class action{
public:
	action(int argc, char ** argv, ros::NodeHandle n);
	~action();
	//method to open right gripper
	bool right_gripper_command(float position, float max_effort, bool waitForResult);
	//method to open left gripper
	bool left_gripper_command(float position, float max_effort, bool waitForResult);
	//method to apply base transforms
	bool base_controller_command(float linearX, float linearY, float linearZ, float angulrX, float angularY, float angularZ, bool waitForResult);
	//method to move right arm
	bool left_arm_traj(float posX, float posY, float posZ, float QX, float QY, float QZ, float QW, bool waitForResult, float max_joint_vel);
	//method to move left arm
	bool right_arm_traj(float posX, float posY, float posZ, float QX, float QY, float QZ, float QW, bool waitForResult, float max_joint_vel);
	//rotate the base
	bool turnOdom(bool clockwise, double radians);
	//drive the robot forwards
	bool driveForwardOdom(double distance);
private:
	//publishers
	ros::Publisher r_gripper_pub;
	ros::Publisher l_gripper_pub;
	ros::Publisher cmd_vel_pub_;
	//service clients
	ros::ServiceClient r_arm_client;
	ros::ServiceClient l_arm_client;
	//subscribers
	ros::Subscriber r_gripper_sub;
	ros::Subscriber l_gripper_sub;
	//gripper clients
	GripperClient * r_gripper_client;
	GripperClient * l_gripper_client;

	ros::NodeHandle * nh_;

	tf::TransformListener listener_;

	
};
#include "actionlib.cpp"
#endif