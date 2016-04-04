#include <ros/ros.h>
#include <pr2_controllers_msgs/SingleJointPositionAction.h>
#include <actionlib/client/simple_action_client.h>

// Our Action interface type, provided as a typedef for convenience
typedef actionlib::SimpleActionClient<pr2_controllers_msgs::SingleJointPositionAction> TorsoClient;

class Torso{
private:
  TorsoClient *torso_client_;

public:
  //Action client initialization
  Torso(){
    
    torso_client_ = new TorsoClient("torso_controller/position_joint_action", true);

    //wait for the action server to come up
    while(!torso_client_->waitForServer(ros::Duration(5.0))){
      ROS_INFO("Waiting for the torso action server to come up");
    }
  }

  ~Torso(){
    delete torso_client_;
  }

  //tell the torso to go up
  void up(){

    pr2_controllers_msgs::SingleJointPositionGoal up;
    up.position = 0.195;  //all the way up is 0.2
    up.min_duration = ros::Duration(2.0);
    up.max_velocity = 1.0;
    
    ROS_INFO("Sending up goal");
    torso_client_->sendGoal(up);
    torso_client_->waitForResult();
  }

  //tell the torso to go down
  void down(){

    pr2_controllers_msgs::SingleJointPositionGoal down;
    down.position = 0.17;
    down.min_duration = ros::Duration(2.0);
    down.max_velocity = 1.0;

    ROS_INFO("Sending down goal");
    torso_client_->sendGoal(down);
    torso_client_->waitForResult();
  }    
};

int main(int argc, char** argv){
  ros::init(argc, argv, "simple_trajectory");

  Torso torso;
  
  torso.down();

  return 0;
}