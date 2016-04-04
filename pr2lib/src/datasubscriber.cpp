#include "datasubscriber.h"

#include "ros/ros.h"
#include <rosgraph_msgs/Clock.h>

#include <cstdlib>
#include <pthread.h>

 
 //global state variables
int argcI;
char ** argvI;
double simTime;
pthread_mutex_t timeMutex;

/*
Callback method for clock topic. Uses mutex to safely store
time to global var
@param msg: the message recieved from the clock topic
*/
void clockCallback(const rosgraph_msgs::Clock::ConstPtr& msg){
	//get the seconds and nanoseconds from the message
	double sec = msg->clock.sec;
	double nsec = msg->clock.nsec/1000000000.0;
	//lock the mutex and store the values
	pthread_mutex_lock(&timeMutex);
	simTime = sec + nsec;
	pthread_mutex_unlock(&timeMutex);

}

/*
Method to be called as a seperate thread by the data subscriber.
Creates ros node and starts spinning here.
*/
void * spin(void *threadid){
	//set up subscriber
	ros::init(argcI, argvI,"clockListener");
	ros::NodeHandle n;
	ros::Subscriber sub = n.subscribe("clock", 1000, clockCallback);
	ros::spin();
	pthread_exit(NULL);
}

data_subscriber::data_subscriber(int argc, char ** argv){
	//store arguments for node
	argcI = argc;
	argvI = argv;
	//initialize mutex
	pthread_mutex_init(&timeMutex, NULL);
	//create and start thread
	pthread_t spinThread;
	int rc = pthread_create(&spinThread, NULL, spin, NULL);
	if(rc){
		ROS_INFO("Unable to Create Thread");
		return;
	}
}
data_subscriber::~data_subscriber(){
	return;
}

double data_subscriber::getSimTime(){
	return simTime;
}