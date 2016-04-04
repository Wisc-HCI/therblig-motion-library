/*
code to listen for ethernet packets and call pr2 methods
*/

//socket includes 
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

//ROS includes
#include "ros/ros.h"

//custom includes
#include "structs.cpp"
#include "actionlib.h"
#include "datasubscriber.h";
#include "enums.cpp"

#define PORT 8888


int main(int argc, char ** argv){
//#########################INITIALIZE ACTION LIBRARY############################
    ros::init(argc, argv, "socket_reader");
    ros::NodeHandle reader_handle;
    action ac(argc, argv, reader_handle); 
    data_subscriber spinner(argc, argv);
//########################BEGIN SOCKET SETUP##################################
    int sockfd, newsockfd, portno;
    socklen_t clilen;
    char clearing_buffer[256];
    struct sockaddr_in serv_addr, cli_addr;
    int n;

    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0){
        ROS_INFO("ERROR opening socket");
        return 0;
    }
    bzero((char *) &serv_addr, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = INADDR_ANY;
    serv_addr.sin_port = htons(PORT);
    if (bind(sockfd, (struct sockaddr *) &serv_addr,
             sizeof(serv_addr)) < 0){
        ROS_INFO("Error Binding");
        return 0;
    } 
            
    listen(sockfd,5);
    clilen = sizeof(cli_addr);
    newsockfd = accept(sockfd, 
                 (struct sockaddr *) &cli_addr, 
                 &clilen);
    if (newsockfd < 0){
        ROS_INFO("Error on Accept");
        return 0;
    }
    

//####################BEGIN LISTENING LOOP######################################
    //create buffers
    char headerBuf[sizeof(header)]; 
    char gripperBuf[sizeof(gripper)];
    char twistBuf[sizeof(twist)]; 
    char armBuf[sizeof(arm)]; 
    char driveForwardBuf[sizeof(driveForward)];
    char rotateBuf[sizeof(rotate)];

    //create structs to cast to
    header * header_shell;
    twist * tw; 
    gripper * gr; 
    arm * am; 
    driveForward * driveForward_shell;
    rotate * rotate_shell;

    //message to send back to high level reciever
    elapsedTime timeMsg;

    //state variables
    bool active = false;
    double startTime = 0;
    double endTime = 0;
    double currentStartTime = 0;
    double currentEndTime = 0;
    int bytes_read;
    while (1)
	{
		//read header 
        bytes_read = read(newsockfd, headerBuf, sizeof(headerBuf));
        header_shell = reinterpret_cast<header *>(&headerBuf);
        if(bytes_read == 0){
            ROS_INFO("Server has closed");
            close(newsockfd);
            return 0;
        }

        bool block = header_shell->isBlocking; 
        
        int message_type = header_shell->messageType;

        //if this is the first time we are active, store the starting data
        if(!active && header_shell->seq_number >= 0){
            startTime = spinner.getSimTime();
            ROS_INFO("Start Time: %lf", startTime);
            active = true;
        }
        //read message
        bool validIK;
        switch(message_type){
        	case 1:
                ROS_INFO("Got Gripper Command");
                bytes_read = read(newsockfd, gripperBuf, sizeof(gripperBuf));
        		gr = reinterpret_cast<gripper*>(gripperBuf); 
                currentStartTime = spinner.getSimTime();
        		if(gr->arm){
        			validIK = ac.right_gripper_command(gr->position, gr->max_effort, block); 
        		}else{
        			validIK = ac.left_gripper_command(gr->position, gr->max_effort, block); 
        		}
                currentEndTime = spinner.getSimTime();

                //send time reply
                timeMsg.time = currentEndTime - currentStartTime;
                if(!validIK){
                    timeMsg.time = InvalidIKSolution;
                }

                ROS_INFO("Time for gripper command: %lf", currentEndTime - currentStartTime);
                //send time back to high level reciever
                if(header_shell->seq_number >= 0){
                    n = write(newsockfd, reinterpret_cast<char*>(&timeMsg), sizeof(elapsedTime));
                }else{
                    n = 1;
                }
                if (n < 0) {
                    ROS_INFO("Error sending time reply");
                    close(newsockfd);
                    return 0;
                }

        		break; 

        	case 2:
                ROS_INFO("Got Move Base Command");
                bytes_read = read(newsockfd, twistBuf, sizeof(twistBuf));
        		tw = reinterpret_cast<twist*>(twistBuf); 
                currentStartTime = spinner.getSimTime();
        		ac.base_controller_command(tw->linearX, tw->linearY, tw->linearZ, tw->angularX, tw->angularY, tw->angularZ, block);
                currentEndTime = spinner.getSimTime();

                //send time reply
                timeMsg.time = currentEndTime - currentStartTime;

                ROS_INFO("Time for move base command: %lf", currentEndTime - currentStartTime);
                //send time back to high level reciever
                if(header_shell->seq_number >= 0){
                    n = write(newsockfd, reinterpret_cast<char*>(&timeMsg), sizeof(elapsedTime));
                }else{
                    n = 1;
                }
                if (n < 0) {
                    ROS_INFO("Error sending time reply");
                    close(newsockfd);
                    return 0;
                }
        		break; 

        	case 3:
                ROS_INFO("Got Arm Command");
                bytes_read = read(newsockfd, armBuf, sizeof(armBuf));
	       		am = reinterpret_cast<arm*>(armBuf); 
                currentStartTime = spinner.getSimTime(); 
	       		if(am->arm == true){
	       			validIK = ac.right_arm_traj(am->posX, am->posY, am->posZ, am->QX, am->QY, am->QZ, am->QW, block, am->max_joint_vel); 
	       		}else{
	       			validIK = ac.left_arm_traj(am->posX, am->posY, am->posZ, am->QX, am->QY, am->QZ, am->QW, block, am->max_joint_vel); 
	       		}
                currentEndTime = spinner.getSimTime();
                //send time reply
                timeMsg.time = currentEndTime - currentStartTime;
                if(!validIK){
                    timeMsg.time = InvalidIKSolution;
                }

                ROS_INFO("Time for arm command: %lf", currentEndTime - currentStartTime);
                //send time back to high level reciever
                if(header_shell->seq_number >= 0){
                    n = write(newsockfd, reinterpret_cast<char*>(&timeMsg), sizeof(elapsedTime));
                }else{
                    n = 1;
                }
                if (n < 0) {
                    ROS_INFO("Error sending time reply");
                    close(newsockfd);
                    return 0;
                }
	       		break; 
            case 4: //end command
                ROS_INFO("Got End Command");
                active = false;
                endTime = spinner.getSimTime();

                timeMsg.time = endTime - startTime;

                ROS_INFO("Total Time Was %lf", endTime - startTime);
                //send time back to high level reciever
                n = write(newsockfd, reinterpret_cast<char*>(&timeMsg), sizeof(elapsedTime));
                if (n < 0) {
                    ROS_INFO("Error sending time reply");
                    close(newsockfd);
                    return 0;
                }
                ROS_INFO("Sent End Reply");
                break;

            case 5:
                ROS_INFO("Got Drive Forward Command");

                bytes_read = read(newsockfd, driveForwardBuf, sizeof(driveForwardBuf));
                driveForward_shell = reinterpret_cast<driveForward*>(driveForwardBuf); 

                currentStartTime = spinner.getSimTime(); 
                ac.driveForwardOdom(driveForward_shell->distance);
                currentEndTime = spinner.getSimTime();

                ROS_INFO("Time for drive forward command: %lf", currentEndTime - currentStartTime);
                timeMsg.time = currentEndTime - currentStartTime;
                //send time back to high level reciever
                if(header_shell->seq_number >= 0){
                    n = write(newsockfd, reinterpret_cast<char*>(&timeMsg), sizeof(elapsedTime));
                }else{
                    n = 1;
                }
                if (n < 0) {
                    ROS_INFO("Error sending time reply");
                    close(newsockfd);
                    return 0;
                }
                break; 

            case 6:
                ROS_INFO("Got rotate command");

                bytes_read = read(newsockfd, rotateBuf, sizeof(rotateBuf));
                rotate_shell = reinterpret_cast<rotate*>(rotateBuf);
                currentStartTime = spinner.getSimTime();
                ac.turnOdom(rotate_shell->clockwise, rotate_shell->radians);

                currentEndTime = spinner.getSimTime();

                ROS_INFO("Time for rotate command: %lf", currentEndTime - currentStartTime);
                timeMsg.time = currentEndTime - currentStartTime;
                //send time back to high level reciever
                if(header_shell->seq_number >= 0){
                    n = write(newsockfd, reinterpret_cast<char*>(&timeMsg), sizeof(elapsedTime));
                }else{
                    n = 1;
                }
                if (n < 0) {
                    ROS_INFO("Error sending time reply");
                    close(newsockfd);
                    return 0;
                }
                break; 
        	default:
                ROS_INFO("Unknown Message Type");
                close(newsockfd);
                return 0;
        }
	    fflush(stdout);
    }

}