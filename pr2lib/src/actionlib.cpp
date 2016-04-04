#include "actionlib.h"
/*
CPP code to send messages to PR2
*/
#include <unistd.h>
#include <sstream>
#include "ros/ros.h"
#include <pr2_controllers_msgs/Pr2GripperCommand.h>
#include <pr2_controllers_msgs/JointControllerState.h>
#include <geometry_msgs/Twist.h>
#include <geometry_msgs/Pose.h>
#include <ros/header.h>
#include "std_msgs/String.h"
#include "std_msgs/Header.h"
#include <pr2lib/ExecuteCartesianIKTrajectory.h>
#include <pr2_controllers_msgs/Pr2GripperCommandAction.h>
#include <actionlib/client/simple_action_client.h>
#include <iostream>
#include <tf/transform_listener.h>
#include <pthread.h>



typedef actionlib::SimpleActionClient<pr2_controllers_msgs::Pr2GripperCommandAction> GripperClient;


ros::ServiceClient armClient;
pr2lib::ExecuteCartesianIKTrajectory armMsg;
void* getService(void*);

//Constructor for action class
action::action(int argc, char ** argv, ros::NodeHandle n){
	//store pointer to nodehandle to use in class methods
	nh_ = &n;
	//create publisher for base commands
    cmd_vel_pub_ = n.advertise<geometry_msgs::Twist>("base_controller/command", 1);
	ROS_INFO("Initialized ROS publishers");
	//create services
	r_arm_client = n.serviceClient<pr2lib::ExecuteCartesianIKTrajectory>("execute_cartesian_ik_trajectory_r");
	l_arm_client = n.serviceClient<pr2lib::ExecuteCartesianIKTrajectory>("execute_cartesian_ik_trajectory_l");
	ROS_INFO("Initialized Services");
	r_gripper_client = new GripperClient("r_gripper_controller/gripper_action", true);
	l_gripper_client = new GripperClient("l_gripper_controller/gripper_action", true);
	ROS_INFO("Initialized Action Clients");

	ros::spinOnce();
}

action::~action(){
}

bool action::right_gripper_command(float position, float max_effort, bool waitForResult){
	ROS_INFO("Sending pr2_controllers_msgs::Pr2GripperCommandGoal to client r_gripper_client with \n position: %lf, max_effort: %lf", position, max_effort);
	//build message
	pr2_controllers_msgs::Pr2GripperCommandGoal msg;
	msg.command.position = position;
	msg.command.max_effort = max_effort;
	r_gripper_client->sendGoal(msg);
	r_gripper_client->waitForResult();
	ROS_INFO("Finished Right Gripper Action");
	return r_gripper_client->getState() == actionlib::SimpleClientGoalState::SUCCEEDED;
}

bool action::left_gripper_command(float position, float max_effort, bool waitForResult){
	ROS_INFO("Sending pr2_controllers_msgs::Pr2GripperCommandGoal to client l_gripper_client with \n position: %lf, max_effort: %lf", position, max_effort);
	//build message
	pr2_controllers_msgs::Pr2GripperCommandGoal msg;
	msg.command.position = position;
	msg.command.max_effort = max_effort;
	l_gripper_client->sendGoal(msg);
	l_gripper_client->waitForResult();
	ROS_INFO("Finished Left Gripper Action");
	return l_gripper_client->getState() == actionlib::SimpleClientGoalState::SUCCEEDED;
}

bool action::base_controller_command(float linearX, float linearY, float linearZ, float angularX, float angularY, float angularZ, bool waitForResult){
	ROS_INFO("Base Controls not currently implemented");
	return false;
}


bool action::left_arm_traj(float posX, float posY, float posZ, float QX, float QY, float QZ, float QW, bool waitForResult, float max_joint_vel){
	ROS_INFO("Sending pr2lib::ExecuteCartesianIKTrajectory to service execute_cartesian_ik_trajectory_l with posX: %f, posY: %f, posZ: %f, QX: %f, QY: %f, QZ: %f, QW: %f, Max Joint Vel: %0.3f",posX,posY,posZ,QX,QY,QZ,QW, max_joint_vel);
	pr2lib::ExecuteCartesianIKTrajectory msg;
	msg.request.header.frame_id = "/base_link";
	msg.request.header.seq = max_joint_vel*100.0;
	msg.request.header.stamp = ros::Time::now();
	geometry_msgs::Pose p;
	p.position.x = posX;
	p.position.y = posY;
	p.position.z = posZ;
	p.orientation.x = QX;
	p.orientation.y = QY;
	p.orientation.z = QZ;
	p.orientation.w = QW;
	msg.request.poses.push_back(p);
	//if we don't want to wait, just send the message and exit. Otherwise listen for completion
	if(waitForResult){
		if (l_arm_client.call(msg))
		{
			ROS_INFO("Successfully called client");
			return true;
		}
		else
		{
			ROS_ERROR("Failed to call service move left arm");
			return false;
		}
		return true;
	}else{
		ROS_INFO("Calling left arm client in new thread");
		armMsg = msg;
		armClient = l_arm_client;
		pthread_t t1;
    	pthread_create(&t1, NULL, &getService, NULL);
    	ROS_INFO("Made new thread");
		return true;
	}
	return true;
}


bool action::right_arm_traj(float posX, float posY, float posZ, float QX, float QY, float QZ, float QW, bool waitForResult, float max_joint_vel){
	ROS_INFO("Sending pr2lib::ExecuteCartesianIKTrajectory to service execute_cartesian_ik_trajectory_r with posX: %f, posY: %f, posZ: %f, QX: %f, QY: %f, QZ: %f, QW: %f, Max Joint Vel: %0.3f",posX,posY,posZ,QX,QY,QZ,QW, max_joint_vel);
	pr2lib::ExecuteCartesianIKTrajectory msg;
	msg.request.header.frame_id = "/base_link";
	msg.request.header.seq = max_joint_vel*100;
	msg.request.header.stamp = ros::Time::now();
	geometry_msgs::Pose p;
	p.position.x = posX;
	p.position.y = posY;
	p.position.z = posZ;
	p.orientation.x = QX;
	p.orientation.y = QY;
	p.orientation.z = QZ;
	p.orientation.w = QW;
	msg.request.poses.push_back(p);
	//if we don't want to wait, just send the message and exit. Otherwise listen for completion
	if(waitForResult){
		if (r_arm_client.call(msg))
		{
			ROS_INFO("Successfully called client");
			return true;
		}
		else
		{
			ROS_ERROR("Failed to call service move right arm");
			return false;
		}
		return true;
	}else{
		ROS_INFO("Calling right arm client in new thread");
		armMsg = msg;
		armClient = r_arm_client;
		pthread_t t1;
    	pthread_create(&t1, NULL, &getService, NULL);
    	ROS_INFO("exited pthread");
		return true;
	}
	return true;
} 


  bool action::turnOdom(bool clockwise, double radians)
  {
  	ROS_INFO("Rotating with clockwise: %d and radians: %lf", clockwise, radians);
    while(radians < 0) radians += 2*M_PI;
    while(radians > 2*M_PI) radians -= 2*M_PI;

    //wait for the listener to get the first message
    listener_.waitForTransform("base_footprint", "odom_combined", 
                               ros::Time(0), ros::Duration(1.0));
    
    //we will record transforms here
    tf::StampedTransform start_transform;
    tf::StampedTransform current_transform;

    //record the starting transform from the odometry to the base frame
    listener_.lookupTransform("base_footprint", "odom_combined", 
                              ros::Time(0), start_transform);
    
    //we will be sending commands of type "twist"
    geometry_msgs::Twist base_cmd;
    //the command will be to turn at 0.75 rad/s
    base_cmd.linear.x = base_cmd.linear.y = 0.0;
    base_cmd.angular.z = 0.75;
    if (clockwise) base_cmd.angular.z = -base_cmd.angular.z;
    
    //the axis we want to be rotating by
    tf::Vector3 desired_turn_axis(0,0,1);
    if (!clockwise) desired_turn_axis = -desired_turn_axis;
    
    ros::Rate rate(10.0);
    bool done = false;
    while (!done && nh_->ok())
    {
      //send the drive command
      cmd_vel_pub_.publish(base_cmd);
      rate.sleep();
      //get the current transform
      try
      {
        listener_.lookupTransform("base_footprint", "odom_combined", 
                                  ros::Time(0), current_transform);
      }
      catch (tf::TransformException ex)
      {
        ROS_ERROR("%s",ex.what());
        break;
      }
      tf::Transform relative_transform = 
        start_transform.inverse() * current_transform;
      tf::Vector3 actual_turn_axis = 
        relative_transform.getRotation().getAxis();
      double angle_turned = relative_transform.getRotation().getAngle();
      if ( fabs(angle_turned) < 1.0e-2) continue;

      if ( actual_turn_axis.dot( desired_turn_axis ) < 0 ) 
        angle_turned = 2 * M_PI - angle_turned;

      if (angle_turned > radians) done = true;
    }
    if (done) return true;
    return false;
  }


  bool action::driveForwardOdom(double distance)
  {
  	ROS_INFO("Driving %lf meters forward", distance);
    //wait for the listener to get the first message
    listener_.waitForTransform("base_footprint", "odom_combined", 
                               ros::Time(0), ros::Duration(1.0));
    
    //we will record transforms here
    tf::StampedTransform start_transform;
    tf::StampedTransform current_transform;

    //record the starting transform from the odometry to the base frame
    listener_.lookupTransform("base_footprint", "odom_combined", 
                              ros::Time(0), start_transform);
    
    //we will be sending commands of type "twist"
    geometry_msgs::Twist base_cmd;
    //the command will be to go forward at 0.25 m/s
    base_cmd.linear.y = base_cmd.angular.z = 0;
    base_cmd.linear.x = 0.25;
    
    ros::Rate rate(10.0);
    bool done = false;
    while (!done && nh_->ok())
    {
      //send the drive command
      cmd_vel_pub_.publish(base_cmd);
      rate.sleep();
      //get the current transform
      try
      {
        listener_.lookupTransform("base_footprint", "odom_combined", 
                                  ros::Time(0), current_transform);
      }
      catch (tf::TransformException ex)
      {
        ROS_ERROR("%s",ex.what());
        break;
      }
      //see how far we've traveled
      tf::Transform relative_transform = 
        start_transform.inverse() * current_transform;
      double dist_moved = relative_transform.getOrigin().length();

      if(dist_moved > distance) done = true;
    }
    if (done) return true;
    return false;
  }





/*
Method to call of seperate threads
*/
void* getService(void*){
	ROS_INFO("callign ServiceClient");
  	armClient.call(armMsg);
  	ROS_INFO("called service");
  	return NULL;
}