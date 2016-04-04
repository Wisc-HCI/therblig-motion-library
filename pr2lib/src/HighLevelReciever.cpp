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
#include <netdb.h>

#include <map>
#include <vector>
#include <fstream>
#include <iostream>
#include <signal.h>
#include <unistd.h>

//ROS includes
#include "ros/ros.h"

//custom includes
#include "structs.cpp"
#include "high_level_structs.cpp"
#include "datasubscriber.h"
#include "enums.cpp"

#define PORT 9999
#define PORT2 8888

//forward declarations
void splitStringToVector(std::vector<float> * obj, std::string inputString);
void splitStringToQuaternion(std::vector<float> * obj, std::string inputString);
std::string GetEnv(const std::string & var);;
int runServer(int argc, char ** argv, int sockfd, int sockfd2, int n, std::map<int, std::vector<float> > objects, std::map<int, std::vector<float> > places, std::map<int, std::vector<float> > orientations);
void sig_handler(int s);

/*
Main method, continually run the 
*/
int main(int argc, char ** argv){


//###########SET UP EVENT HANDLER###########################################
    struct sigaction sigIntHandler;

    sigIntHandler.sa_handler = sig_handler;
    sigemptyset(&sigIntHandler.sa_mask);
    sigIntHandler.sa_flags = 0;

    sigaction(SIGINT, &sigIntHandler, NULL);

//########################POPULATE MAPS#######################################
    std::map<int, std::vector<float> > objects;
    std::map<int, std::vector<float> > places;
    std::map<int, std::vector<float> > orientations;

    std::string pathtoproject = GetEnv("PR2LIB_PATH");
    ROS_INFO("Path to this package: %s", pathtoproject.c_str());

    std::vector<float> obj;
    int counter = 0;
    std::string line;
    //read in objects
    std::string object_addend = "/params/object_data.txt";
    std::string objectpath = pathtoproject + object_addend;
    std::ifstream objectFile(objectpath.c_str());
    while (getline(objectFile, line)) {
        if (line.empty()) continue;
        splitStringToVector(&obj,line);
        objects[counter] = obj;
        counter++;
    }
    //read in places
    std::string place_addend = "/params/place_data.txt";
    std::string placepath = pathtoproject + place_addend;
    std::ifstream placeFile(placepath.c_str());
    counter = 0;
    while (getline(placeFile, line)) {
        if (line.empty()) continue;
        splitStringToVector(&obj,line);
        places[counter] = obj;
        counter++;
    }

    //read in orientations
    std::string orientation_addend = "/params/orientation_data.txt";
    std::string orientationpath = pathtoproject + orientation_addend;
    std::ifstream orientationFile(orientationpath.c_str());
    counter = 0;
    while (getline(orientationFile, line)){
        splitStringToQuaternion(&obj, line);
        orientations[counter] = obj;
        counter++;
    }

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 4; j++){
            printf("%lf ", orientations[i].at(j));
        }
        printf("\n");
    }

//##############CONNECT TO LOW LEVEL RECIEVER###############################
    sleep(1);

    int sockfd2, n;
    struct sockaddr_in serv_addr2;
    struct hostent *server2;

    sockfd2 = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd2 < 0){
        ROS_INFO("Error Opening Socket");
        return 0;
    }
    server2 = (struct hostent *) gethostbyname((char *)"127.0.0.1");
    if (server2 == NULL) {
        ROS_INFO("No Such Host");
        return 0;
    }
    bzero((char *) &serv_addr2, sizeof(serv_addr2));
    serv_addr2.sin_family = AF_INET;
    bcopy((char *)server2->h_addr, 
         (char *)&serv_addr2.sin_addr.s_addr,
         server2->h_length);
    serv_addr2.sin_port = htons(PORT2);
    if (connect(sockfd2,(struct sockaddr *) &serv_addr2,sizeof(serv_addr2)) < 0){
        ROS_INFO("Error Connecting");
    }

    sleep(1);

//##########################RESET ROBOT POSITION##################################
    header gripHeader_start;
    gripHeader_start.check = 55; //always set this to be safe;
    gripHeader_start.seq_number = -1;
    gripHeader_start.timestamp = 25;
    gripHeader_start.isBlocking = 1;
    gripHeader_start.messageType = 1; 

    gripper sampleGripper_start;
    sampleGripper_start.seq_number = -1;
    sampleGripper_start.arm = false;  
    sampleGripper_start.position = 0.65;
    sampleGripper_start.max_effort = 100.0; 

    header armHeader_start;
    armHeader_start.check = 55; //always set this to be safe;
    armHeader_start.seq_number = -2;
    armHeader_start.timestamp = 25;
    armHeader_start.isBlocking = 1;
    armHeader_start.messageType = 3; 

    arm sampleArm_start;
    sampleArm_start.seq_number = -2;
    sampleArm_start.arm = false; 
    sampleArm_start.posX = 0.541;
    sampleArm_start.posY = -0.094;
    sampleArm_start.posZ = 1.18;
    sampleArm_start.QX = -0.398;
    sampleArm_start.QY = -0.540;
    sampleArm_start.QZ = 0.562;
    sampleArm_start.QW = -0.483; 
    sampleArm_start.max_joint_vel = 0.5;

    //sending gripper command 
    //n = write(sockfd2, reinterpret_cast<char*>(&gripHeader_start), sizeof(gripHeader_start));
    //n = write(sockfd2, reinterpret_cast<char*>(&sampleGripper_start), sizeof(sampleGripper_start));

    //send arm command
    //n = write(sockfd2, reinterpret_cast<char*>(&armHeader_start), sizeof(armHeader_start));
    //n = write(sockfd2, reinterpret_cast<char*>(&sampleArm_start), sizeof(sampleArm_start));

    //send other arm
    sampleArm_start.arm = false;
    sampleArm_start.posY = -1*sampleArm_start.posY;
    sampleGripper_start.arm = false;

    //sending gripper command 
    n = write(sockfd2, reinterpret_cast<char*>(&gripHeader_start), sizeof(gripHeader_start));
    n = write(sockfd2, reinterpret_cast<char*>(&sampleGripper_start), sizeof(sampleGripper_start));

    //send arm command
    n = write(sockfd2, reinterpret_cast<char*>(&armHeader_start), sizeof(armHeader_start));
    n = write(sockfd2, reinterpret_cast<char*>(&sampleArm_start), sizeof(sampleArm_start));

    ROS_INFO("Sent robot initialization commands");

//###############SET UP SERVER SOCKET####################################################################
    int sockfd;
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0){
        ROS_INFO("Error Opening Socket");
        close(sockfd2);
        return 0;
    }

    struct sockaddr_in serv_addr;
    bzero((char *) &serv_addr, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = INADDR_ANY;
    serv_addr.sin_port = htons(PORT);
    if (bind(sockfd, (struct sockaddr *) &serv_addr,
             sizeof(serv_addr)) < 0){
        ROS_INFO("Error Binding");
        close(sockfd2);
        return 0;
    }
    ROS_INFO("Socket Bound");


    while(true){
        runServer(argc, argv, sockfd, sockfd2, n, objects, places, orientations);
    }
}

/*
Method to handle incoming signals, namely ctrl-c, allowing the 
program to exit cleanly
*/
void sig_handler(int s){
    printf("Caught signal %d\n",s);
    exit(1); 
}

int runServer(int argc, char ** argv, int sockfd, int sockfd2, int n, std::map<int, std::vector<float> > objects, std::map<int, std::vector<float> > places, std::map<int, std::vector<float> > orientations){

    ROS_INFO("Running Server");

//#################SET UP SERVER SOCKET###############################################################
    int newsockfd, bytes_read;
    socklen_t clilen;
    struct sockaddr_in cli_addr;


    listen(sockfd,5);
    clilen = sizeof(cli_addr);
    newsockfd = accept(sockfd, 
                (struct sockaddr *) &cli_addr, 
                &clilen);
    if (newsockfd < 0){
        ROS_INFO("Error on accept");
    }

//####################BEGIN LISTENING LOOP######################################
    //create buffers
    char headerBuf[sizeof(command_header)]; 
    char transport_empty_buf[sizeof(transport_empty)];
    char transport_loaded_buf[sizeof(transport_loaded)];
    char grasp_buf[sizeof(grasp)];
    char position_buf[sizeof(position)];
    char release_load_buf[sizeof(release_load)];
    char use_breaker_buf[sizeof(use_breaker)];
    char retract_buf[sizeof(retract)];
    char movebase_buf[sizeof(movebase)];
    char end_buf[sizeof(elapsedTime)];
    char driveForward_buf[sizeof(driveForward)];
    char rotate_buf[sizeof(rotate)];
    char preposition_buf[sizeof(preposition)];

    //pointer structs to cast to
    transport_empty * transport_empty_shell;
    transport_loaded * transport_loaded_shell;
    grasp * grasp_shell;
    position * position_shell;
    release_load * release_load_shell;
    use_breaker * use_breaker_shell;
    retract * retract_shell;
    movebase * movebase_shell;
    elapsedTime * end_shell;
    driveForward * driveForward_shell;
    rotate * rotate_shell;
    preposition * preposition_shell;

    //structs to send to low level controller
    header gripHeader;
    gripper gripperBuf;
    header twistHeader;
    twist twistBuf;
    header armHeader; 
    arm armBuf;
    header driveForwardHeader;
    driveForward driveForwardBuf;
    header rotateHeader;
    rotate rotateBuf;

    //vars to store previous hand position and orientation
    float QX_R = 0.5;
    float QY_R = 0.5;
    float QZ_R = -0.5;
    float QW_R = 0.5;

    float QX_L = 0.5;
    float QY_L = 0.5;
    float QZ_L = -0.5;
    float QW_L = 0.5;


    float posX_R = 0.4;
    float posY_R = -0.19;
    float posZ_R = 0.8;

    float posX_L = 0.4;
    float posY_L = 0.19;
    float posZ_L = 0.8;

    //vars to store which objects are in each hand
    int right_hand_object = -1;
    int left_hand_object = -1;
    int right_hand_obj_location = -1;
    int left_hand_obj_location = -1;

    while (1)
	{
		//read header 
        bytes_read = read(newsockfd, headerBuf, sizeof(command_header));

        if(bytes_read == 0){
            ROS_INFO("Client has closed");
            close(newsockfd);
            return 0;
        }
        //convert header into usable values
        int check = (headerBuf[1] << 8) + headerBuf[0];
        int seq_number = (headerBuf[5] << 24) + (headerBuf[4] << 16) + (headerBuf[3] << 8) + headerBuf[2]; 
        int timestamp = (headerBuf[9] << 24) + (headerBuf[8] << 16) + (headerBuf[7] << 8) + headerBuf[6];
        int message_type = (headerBuf[13] << 24) + (headerBuf[12] << 16) + (headerBuf[11] << 8) + headerBuf[10]; 
        if(check != 55){
            ROS_INFO("Invalid Check");
            end_shell->time = InvalidCheck;
            n = write(newsockfd,reinterpret_cast<char*>(end_shell), sizeof(elapsedTime));
            close(newsockfd);
            return 0;
        }
        //read message
        switch(message_type){

        	case 0: //TRANSPORT EMPTY HERE
                bytes_read = read(newsockfd, transport_empty_buf, sizeof(transport_empty_buf));

        		transport_empty_shell = reinterpret_cast<transport_empty*>(&transport_empty_buf); 
                ROS_INFO("Got transport_empty command");


                //make sure we are not trying to hold two items in a hand, and if valid store the temp location
                
                if(transport_empty_shell->arm){
                    if(right_hand_object != -1){
                        ROS_INFO("Trying To Transport Empty But Holding Object In Right Hand");
                        end_shell->time = TransportEmptyObjectInHand;
                        n = write(newsockfd,reinterpret_cast<char*>(end_shell), sizeof(elapsedTime));
                        close(newsockfd);
                    }
                    right_hand_obj_location = transport_empty_shell->object;
                }else{
                    if(left_hand_object != -1){
                        ROS_INFO("Trying To Transport Empty But Holding Object In Left Hand");
                        end_shell->time = TransportEmptyObjectInHand;
                        n = write(newsockfd,reinterpret_cast<char*>(end_shell), sizeof(elapsedTime));
                        close(newsockfd);
                    }
                    left_hand_obj_location = transport_empty_shell->object;
                }
                
                if(objects.count(transport_empty_shell->object) < 1){
                    ROS_INFO("Invalid Object Index");
                    end_shell->time = InvalidObjectIndex;
                    n = write(newsockfd,reinterpret_cast<char*>(end_shell), sizeof(elapsedTime));
                    close(newsockfd);
                }

                //move arm
                armHeader.check = 55; 
                armHeader.seq_number = 2;
                armHeader.timestamp = 0;
                armHeader.isBlocking = 1;
                armHeader.messageType = 3; 

                armBuf.arm = transport_empty_shell->arm;
                armBuf.posX = objects[transport_empty_shell->object].at(0);
                armBuf.posY = objects[transport_empty_shell->object].at(1);
                armBuf.posZ = objects[transport_empty_shell->object].at(2);
                armBuf.max_joint_vel = transport_empty_shell->max_joint_vel;

                //determine the new orientation for the gripper
                armBuf.QX = orientations[transport_empty_shell->orientation].at(0);
                armBuf.QY = orientations[transport_empty_shell->orientation].at(1);
                armBuf.QZ = orientations[transport_empty_shell->orientation].at(2);
                armBuf.QW = orientations[transport_empty_shell->orientation].at(3);

                if(transport_empty_shell->arm){ //right arm
                    QX_R = armBuf.QX;
                    QY_R = armBuf.QY;
                    QZ_R = armBuf.QZ;
                    QW_R = armBuf.QW;
                }else{
                    QX_L = armBuf.QX;
                    QY_L = armBuf.QY;
                    QZ_L = armBuf.QZ;
                    QW_L = armBuf.QW;
                }

                if(transport_empty_shell->arm){
                    posX_R = armBuf.posX;
                    posY_R = armBuf.posY;
                    posZ_R = armBuf.posZ;
                }else{
                    posX_L = armBuf.posX;
                    posY_L = armBuf.posY;
                    posZ_L = armBuf.posZ;
                }
                
                n = write(sockfd2, reinterpret_cast<char*>(&armHeader), sizeof(header));
                n = write(sockfd2, reinterpret_cast<char*>(&armBuf), sizeof(arm));

                bytes_read = read(sockfd2, end_buf, sizeof(end_buf));
                end_shell = reinterpret_cast<elapsedTime*>(&end_buf);
                ROS_INFO("Transport Empty took %lf seconds", end_shell->time);
                n = write(newsockfd,reinterpret_cast<char*>(end_shell), sizeof(elapsedTime));
                break;

        	case 1: 
                bytes_read = read(newsockfd, transport_loaded_buf, sizeof(transport_loaded_buf));
                transport_loaded_shell = reinterpret_cast<transport_loaded*>(&transport_loaded_buf); 
                ROS_INFO("Got Transport_Loaded command");

                //check for valid map location
                if(places.count(transport_loaded_shell->position) < 1){
                    ROS_INFO("Invalid Place Index");
                    end_shell->time = InvalidPlaceIndex;
                    n = write(newsockfd,reinterpret_cast<char*>(end_shell), sizeof(elapsedTime));
                }

                //move arm
                armHeader.check = 55; 
                armHeader.seq_number = 2;
                armHeader.timestamp = 0;
                armHeader.isBlocking = 1;
                armHeader.messageType = 3; 

                armBuf.arm = transport_loaded_shell->arm;
                armBuf.posX = places[transport_loaded_shell->position].at(0);
                armBuf.posY = places[transport_loaded_shell->position].at(1);
                armBuf.posZ = places[transport_loaded_shell->position].at(2);
                armBuf.max_joint_vel = transport_loaded_shell->max_joint_vel;
                
                //get the correct previous orientation for the hand
                if(transport_loaded_shell->arm){ //right arm
                    armBuf.QX = QX_R;
                    armBuf.QY = QY_R;
                    armBuf.QZ = QZ_R;
                    armBuf.QW = QW_R;
                }else{ //left arm
                    armBuf.QX = QX_L;
                    armBuf.QY = QY_L;
                    armBuf.QZ = QZ_L;
                    armBuf.QW = QW_L;
                }

                n = write(sockfd2, reinterpret_cast<char*>(&armHeader), sizeof(header));
                n = write(sockfd2, reinterpret_cast<char*>(&armBuf), sizeof(arm));


                //store the new location of the object
                int map_index;
                if(transport_loaded_shell->arm){
                    map_index = right_hand_object;
                }else{
                    map_index = left_hand_object;
                }
                if(map_index == -1){
                    ROS_INFO("Calling Transport Loaded On Empty Hand");
                    end_shell->time = TransportLoadedEmptyHand;
                    n = write(newsockfd,reinterpret_cast<char*>(end_shell), sizeof(elapsedTime));
                    close(newsockfd);
                    return 0;
                }else{
                    std::vector<float> new_location;
                    new_location.push_back(armBuf.posX);
                    new_location.push_back(armBuf.posY);
                    new_location.push_back(armBuf.posZ); 
                    objects[map_index] = new_location;
                }

                if(transport_empty_shell->arm){
                    posX_R = armBuf.posX;
                    posY_R = armBuf.posY;
                    posZ_R = armBuf.posZ;
                }else{
                    posX_L = armBuf.posX;
                    posY_L = armBuf.posY;
                    posZ_L = armBuf.posZ;
                }

                bytes_read = read(sockfd2, end_buf, sizeof(end_buf));
                end_shell = reinterpret_cast<elapsedTime*>(&end_buf);
                ROS_INFO("Transport Loaded took %lf seconds", end_shell->time);
                n = write(newsockfd,reinterpret_cast<char*>(end_shell), sizeof(elapsedTime));
                
                break;

        	case 2:
                bytes_read = read(newsockfd, grasp_buf, sizeof(grasp_buf));
                grasp_shell = reinterpret_cast<grasp*>(grasp_buf);  
                ROS_INFO("Got Grasp Command");  

                //check that we are not currently holding an object
                if(grasp_shell->arm){
                    if(right_hand_object != -1){
                        ROS_INFO("Trying To Grasp With Right Hand But Already Holding Object");
                        end_shell->time = GraspAlreadyHoldingObject;
                        n = write(newsockfd,reinterpret_cast<char*>(end_shell), sizeof(elapsedTime));
                        close(newsockfd);
                        return 0;
                    }
                }else{
                    if(left_hand_object != -1){
                        ROS_INFO("Trying To Grasp With Left Hand But Already Holding Object");
                        end_shell->time = GraspAlreadyHoldingObject;
                        n = write(newsockfd,reinterpret_cast<char*>(end_shell), sizeof(elapsedTime));
                        close(newsockfd);
                        return 0;
                    }
                }

                gripHeader.check = 55;
                gripHeader.seq_number = 0;
                gripHeader.timestamp = 0;
                gripHeader.isBlocking = 1;
                gripHeader.messageType = 1;
                
                gripperBuf.seq_number = 0;
                gripperBuf.arm = grasp_shell->arm;
                gripperBuf.position = 0.03;  // CHANGE GRASP here
                gripperBuf.max_effort = grasp_shell->effort;

                n = write(sockfd2, reinterpret_cast<char*>(&gripHeader), sizeof(header));
                n = write(sockfd2, reinterpret_cast<char*>(&gripperBuf), sizeof(gripper));

                bytes_read = read(sockfd2, end_buf, sizeof(end_buf));
                end_shell = reinterpret_cast<elapsedTime*>(&end_buf);
                ROS_INFO("Grasp took %lf seconds", end_shell->time);
                n = write(newsockfd,reinterpret_cast<char*>(end_shell), sizeof(elapsedTime));

                //store the new object in the hand
                if(grasp_shell->arm){
                    right_hand_object = right_hand_obj_location;
                }else{
                    left_hand_object = left_hand_obj_location;
                    printf("Storing left hand object\n");
                }

                armHeader.check = 55; 
                armHeader.seq_number = 2;
                armHeader.timestamp = 0;
                armHeader.isBlocking = 1;
                armHeader.messageType = 3; 

                armBuf.arm = grasp_shell->arm;
                if(grasp_shell->arm){
                    armBuf.posX = 0.4;
                    armBuf.posY = -0.19;
                    armBuf.posZ = 1.0;
                }else{  //LEFT ARM
                    // Config 1
                    armBuf.posX = 0.465;      
                    armBuf.posY = 0.05;     
                    armBuf.posZ = 1.17;      

                    // // Config 2: high position
                    // armBuf.posX = 0.545;      // CHANGE HERE
                    // armBuf.posY = 0.565;     // CHANGE HERE
                    // armBuf.posZ = 1.29;      // CHANGE HERE
                }
                //get the correct previous orientation for the hand
                if(grasp_shell->arm){ //right arm
                    armBuf.QX = 0.5;
                    armBuf.QY = 0.5;
                    armBuf.QZ = -0.5;
                    armBuf.QW = 0.5;
                }else{ //left arm
                    armBuf.QX = 0.5;
                    armBuf.QY = 0.5;
                    armBuf.QZ = -0.5;
                    armBuf.QW = 0.5;
                }
                QX_L = 0.5;
                QY_L = 0.5;
                QZ_L = -0.5;
                QW_L = 0.5;

                QX_R = 0.5;
                QY_R = 0.5;
                QZ_R = -0.5;
                QW_R = 0.5;
                armBuf.max_joint_vel = 0.5;

                n = write(sockfd2,reinterpret_cast<char*>(&armHeader), sizeof(header));
                n = write(sockfd2,reinterpret_cast<char*>(&armBuf), sizeof(arm));
                
                if(grasp_shell->arm){
                    posX_R = armBuf.posX;
                    posY_R = armBuf.posY;
                    posZ_R = armBuf.posZ;
                }else{
                    posX_L = armBuf.posX;
                    posY_L = armBuf.posY;
                    posZ_L = armBuf.posZ;
                }
                bytes_read = read(sockfd2, end_buf, sizeof(end_buf));
                end_shell = reinterpret_cast<elapsedTime*>(&end_buf);
                ROS_INFO("Retract took %lf seconds", end_shell->time);
                //n = write(newsockfd,reinterpret_cast<char*>(end_shell), sizeof(elapsedTime));


                break;

            case 3:
                read(newsockfd, position_buf, sizeof(position_buf));
                position_shell = reinterpret_cast<position*>(&position_buf); 
                ROS_INFO("Got Position command");

                //move arm
                armHeader.check = 55; 
                armHeader.seq_number = 2;
                armHeader.timestamp = 0;
                armHeader.isBlocking = 1;
                armHeader.messageType = 3; 

                //get the stored arm location
                armBuf.arm = position_shell->arm;
                if(position_shell->arm){
                    armBuf.posX = posX_R;
                    armBuf.posY = posY_R;
                    armBuf.posZ = posZ_R;
                }else{
                    armBuf.posX = posX_L;
                    armBuf.posY = posY_L;
                    armBuf.posZ = posZ_L;
                }
                armBuf.max_joint_vel = position_shell->max_joint_vel;


                //determine the new orientation for the gripper
                armBuf.QX = orientations[position_shell->orientation].at(0);
                armBuf.QY = orientations[position_shell->orientation].at(1);
                armBuf.QZ = orientations[position_shell->orientation].at(2);
                armBuf.QW = orientations[position_shell->orientation].at(3);

                if(position_shell->arm){ //right arm
                    QX_R = armBuf.QX;
                    QY_R = armBuf.QY;
                    QZ_R = armBuf.QZ;
                    QW_R = armBuf.QW;
                }else{ //left arm
                    QX_L = armBuf.QX;
                    QY_L = armBuf.QY;
                    QZ_L = armBuf.QZ;
                    QW_L = armBuf.QW;
                }

                n = write(sockfd2, reinterpret_cast<char*>(&armHeader), sizeof(header));
                n = write(sockfd2, reinterpret_cast<char*>(&armBuf), sizeof(arm));

                bytes_read = read(sockfd2, end_buf, sizeof(end_buf));
                end_shell = reinterpret_cast<elapsedTime*>(&end_buf);
                ROS_INFO("Position took %lf seconds", end_shell->time);
                n = write(newsockfd,reinterpret_cast<char*>(end_shell), sizeof(elapsedTime));
                break;


            case 4:
                bytes_read = read(newsockfd,release_load_buf,sizeof(release_load));
                release_load_shell = reinterpret_cast<release_load*>(release_load_buf);  
                ROS_INFO("Got Release Load Command");  
                if(release_load_shell->arm){
                    if(right_hand_object == -1){
                        ROS_INFO("Trying To Release Object But No Object In Right Hand");
                        end_shell->time = ReleaseLoadNoObject;
                        n = write(newsockfd,reinterpret_cast<char*>(end_shell), sizeof(elapsedTime));
                        close(newsockfd);
                        return 0;
                    }
                    right_hand_object = -1;
                }else{
                    if(left_hand_object == -1){
                        ROS_INFO("Trying To Release Object But No Object In Left Hand");
                        end_shell->time = ReleaseLoadNoObject;
                        n = write(newsockfd,reinterpret_cast<char*>(end_shell), sizeof(elapsedTime));
                        close(newsockfd);
                        return 0;
                    }
                    left_hand_object = -1;
                }
                //send the open gripper command
                gripHeader.check = 55;
                gripHeader.seq_number = 0;
                gripHeader.timestamp = 0;
                gripHeader.isBlocking = 1;
                gripHeader.messageType = 1;
                
                gripperBuf.seq_number = 0;
                gripperBuf.arm = release_load_shell->arm;
                gripperBuf.position = 0.65;
                gripperBuf.max_effort = 100;

                n = write(sockfd2, reinterpret_cast<char*>(&gripHeader), sizeof(header));
                n = write(sockfd2, reinterpret_cast<char*>(&gripperBuf), sizeof(gripper));
                bytes_read = read(sockfd2, end_buf, sizeof(end_buf));
                end_shell = reinterpret_cast<elapsedTime*>(&end_buf);
                ROS_INFO("Release Load took %lf seconds", end_shell->time);
                n = write(newsockfd,reinterpret_cast<char*>(end_shell), sizeof(elapsedTime));

                armHeader.check = 55; 
                armHeader.seq_number = 2;
                armHeader.timestamp = 0;
                armHeader.isBlocking = 1;
                armHeader.messageType = 3; 

                armBuf.arm = release_load_shell->arm;
                if(release_load_shell->arm){
                    armBuf.posX = 0.4;
                    armBuf.posY = -0.19;
                    armBuf.posZ = 1.0;
                }else{  //LEFT ARM
                    // Config 1
                    armBuf.posX = 0.465;      
                    armBuf.posY = 0.05;     
                    armBuf.posZ = 1.17;      

                    // // Config 2: high position
                    // armBuf.posX = 0.545;      // CHANGE HERE
                    // armBuf.posY = 0.565;     // CHANGE HERE
                    // armBuf.posZ = 1.29;      // CHANGE HERE
                }
                //get the correct previous orientation for the hand
                if(release_load_shell->arm){ //right arm
                    armBuf.QX = 0.5;
                    armBuf.QY = 0.5;
                    armBuf.QZ = -0.5;
                    armBuf.QW = 0.5;
                }else{ //left arm
                    armBuf.QX = 0.5;
                    armBuf.QY = 0.5;
                    armBuf.QZ = -0.5;
                    armBuf.QW = 0.5;
                }
                QX_L = 0.5;
                QY_L = 0.5;
                QZ_L = -0.5;
                QW_L = 0.5;

                QX_R = 0.5;
                QY_R = 0.5;
                QZ_R = -0.5;
                QW_R = 0.5;
                armBuf.max_joint_vel = 0.5;

                n = write(sockfd2,reinterpret_cast<char*>(&armHeader), sizeof(header));
                n = write(sockfd2,reinterpret_cast<char*>(&armBuf), sizeof(arm));
                
                if(grasp_shell->arm){
                    posX_R = armBuf.posX;
                    posY_R = armBuf.posY;
                    posZ_R = armBuf.posZ;
                }else{
                    posX_L = armBuf.posX;
                    posY_L = armBuf.posY;
                    posZ_L = armBuf.posZ;
                }
                bytes_read = read(sockfd2, end_buf, sizeof(end_buf));
                end_shell = reinterpret_cast<elapsedTime*>(&end_buf);
                ROS_INFO("Retract took %lf seconds", end_shell->time);
                //n = write(newsockfd,reinterpret_cast<char*>(end_shell), sizeof(elapsedTime));
                break;

            case 5:
                bytes_read = read(newsockfd, movebase_buf,sizeof(movebase_buf));
                movebase_shell = reinterpret_cast<movebase*>(&movebase_buf); 
                ROS_INFO("Got Move Base Command");

                twistHeader.check = 55;
                twistHeader.seq_number = 0;
                twistHeader.timestamp = 0;
                twistHeader.isBlocking = 1;
                twistHeader.messageType = 2;

                twistBuf.seq_number = 0;
                twistBuf.linearX = movebase_shell->relativeX;
                twistBuf.linearY = movebase_shell->relativeY;
                twistBuf.linearZ = movebase_shell->relativeZ;
                twistBuf.angularX = 0;
                twistBuf.angularY = 0;
                twistBuf.angularZ = 0;

                n = write(sockfd2,reinterpret_cast<char*>(&twistHeader), sizeof(header));
                n = write(sockfd2,reinterpret_cast<char*>(&twistBuf), sizeof(twist));
                bytes_read = read(sockfd2, end_buf, sizeof(end_buf));
                end_shell = reinterpret_cast<elapsedTime*>(&end_buf);
                ROS_INFO("Move Base took %lf seconds", end_shell->time);
                n = write(newsockfd,reinterpret_cast<char*>(end_shell), sizeof(elapsedTime));
                break;

            case 6: 
                read(newsockfd, retract_buf,sizeof(retract_buf));
                retract_shell = reinterpret_cast<retract*>(&retract_buf); 
                ROS_INFO("Got Retract Command");

                armHeader.check = 55; 
                armHeader.seq_number = 2;
                armHeader.timestamp = 0;
                armHeader.isBlocking = 1;
                armHeader.messageType = 3; 

                armBuf.arm = retract_shell->arm;
                if(retract_shell->arm){
                    armBuf.posX = 0.4;
                    armBuf.posY = -0.19;
                    armBuf.posZ = 1.0;
                }else{  //LEFT ARM
                    armBuf.posX = 0.465;      
                    armBuf.posY = 0.05;     
                    armBuf.posZ = 1.17;      
                }
                //get the correct previous orientation for the hand
                if(retract_shell->arm){ //right arm
                    armBuf.QX = 0.5;
                    armBuf.QY = 0.5;
                    armBuf.QZ = -0.5;
                    armBuf.QW = 0.5;
                }else{ //left arm
                    armBuf.QX = 0.5;
                    armBuf.QY = 0.5;
                    armBuf.QZ = -0.5;
                    armBuf.QW = 0.5;
                }
                QX_L = 0.5;
                QY_L = 0.5;
                QZ_L = -0.5;
                QW_L = 0.5;

                QX_R = 0.5;
                QY_R = 0.5;
                QZ_R = -0.5;
                QW_R = 0.5;
                armBuf.max_joint_vel = retract_shell->max_joint_vel;

                n = write(sockfd2,reinterpret_cast<char*>(&armHeader), sizeof(header));
                n = write(sockfd2,reinterpret_cast<char*>(&armBuf), sizeof(arm));
                
                if(retract_shell->arm){
                    posX_R = armBuf.posX;
                    posY_R = armBuf.posY;
                    posZ_R = armBuf.posZ;
                }else{
                    posX_L = armBuf.posX;
                    posY_L = armBuf.posY;
                    posZ_L = armBuf.posZ;
                }
                bytes_read = read(sockfd2, end_buf, sizeof(end_buf));
                end_shell = reinterpret_cast<elapsedTime*>(&end_buf);
                ROS_INFO("Retract took %lf seconds", end_shell->time);
                n = write(newsockfd,reinterpret_cast<char*>(end_shell), sizeof(elapsedTime));
                
                break;

            case 7:
                ROS_INFO("Use Breaker not currently implemented");
                end_shell->time = UnimplementedCase;
                n = write(newsockfd,reinterpret_cast<char*>(end_shell), sizeof(elapsedTime));
                close(newsockfd);
                return 0;

            case 8:
                ROS_INFO("Got End Command");
                //send the end header command
                header endHeader;
                endHeader.check = 55;
                endHeader.seq_number = 0;
                endHeader.timestamp = 0;
                endHeader.isBlocking = true;
                endHeader.messageType = 4;
                n = write(sockfd2,reinterpret_cast<char*>(&endHeader), sizeof(header));
                ROS_INFO("Sent End Command And Waiting For Reply");
                //wait for response from low level server
                bytes_read = read(sockfd2,end_buf,sizeof(end_buf));
                end_shell = reinterpret_cast<elapsedTime*>(&end_buf);
                ROS_INFO("Overall Time: %lf", end_shell->time); 

                n = write(newsockfd,reinterpret_cast<char*>(end_shell), sizeof(elapsedTime));
                ROS_INFO("Sent Time Reply");
                break;

            case 9:
                bytes_read = read(newsockfd, rotate_buf,sizeof(rotate_buf));
                ROS_INFO("Got Rotate Command");
                rotateHeader.check = 55;
                rotateHeader.seq_number = 0;
                rotateHeader.timestamp = 0;
                rotateHeader.isBlocking = true;
                rotateHeader.messageType = 6;
                //send command
                n = write(sockfd2,reinterpret_cast<char*>(&rotateHeader), sizeof(header));
                n = write(sockfd2,&rotate_buf, sizeof(rotate));

                bytes_read = read(sockfd2, end_buf, sizeof(end_buf));
                end_shell = reinterpret_cast<elapsedTime*>(&end_buf);
                ROS_INFO("Rotate took %lf seconds", end_shell->time);
                n = write(newsockfd,reinterpret_cast<char*>(end_shell), sizeof(elapsedTime));
                break;

            case 10:
                bytes_read = read(newsockfd, driveForward_buf,sizeof(driveForward_buf));
                ROS_INFO("Got Drive Forward Command");

                driveForwardHeader.check = 55;
                driveForwardHeader.seq_number = 0;
                driveForwardHeader.timestamp = 0;
                driveForwardHeader.isBlocking = true;
                driveForwardHeader.messageType = 5;

                //send command
                n = write(sockfd2,reinterpret_cast<char*>(&driveForwardHeader), sizeof(header));
                n = write(sockfd2,&driveForward_buf, sizeof(driveForward));

                bytes_read = read(sockfd2, end_buf, sizeof(end_buf));
                end_shell = reinterpret_cast<elapsedTime*>(&end_buf);

                ROS_INFO("Drive Forward took %lf seconds", end_shell->time);
                n = write(newsockfd,reinterpret_cast<char*>(end_shell), sizeof(elapsedTime));
                break;

            case 11: //preposition command
                bytes_read = read(newsockfd, preposition_buf, sizeof(preposition_buf));
                ROS_INFO("Got preposition command");
                preposition_shell = reinterpret_cast<preposition*>(&preposition_buf);

                //move left arm
                armHeader.check = 55; 
                armHeader.seq_number = 2;
                armHeader.timestamp = 0;
                armHeader.isBlocking = 1;
                armHeader.messageType = 3; 

                armBuf.arm = false;
                armBuf.posX = objects[preposition_shell->object].at(0);
                armBuf.posY = objects[preposition_shell->object].at(1);
                armBuf.posZ = objects[preposition_shell->object].at(2);
                armBuf.max_joint_vel = preposition_shell->max_joint_vel;

                armBuf.QX = orientations[preposition_shell->orientation].at(0);
                armBuf.QY = orientations[preposition_shell->orientation].at(1);
                armBuf.QZ = orientations[preposition_shell->orientation].at(2);
                armBuf.QW = orientations[preposition_shell->orientation].at(3);

                n = write(sockfd2,reinterpret_cast<char*>(&armHeader), sizeof(header));
                n = write(sockfd2,&armBuf, sizeof(armBuf));

                //move right arm
                armHeader.check = 55; 
                armHeader.seq_number = 2;
                armHeader.timestamp = 1;
                armHeader.isBlocking = 1;
                armHeader.messageType = 3; 

                armBuf.arm = true;
                armBuf.posX = objects[preposition_shell->object].at(0);
                armBuf.posY = objects[preposition_shell->object].at(1) - preposition_shell->spacing;
                armBuf.posZ = objects[preposition_shell->object].at(2);
                armBuf.max_joint_vel = preposition_shell->max_joint_vel;

                armBuf.QX = orientations[preposition_shell->orientation].at(0);
                armBuf.QY = orientations[preposition_shell->orientation].at(1);
                armBuf.QZ = orientations[preposition_shell->orientation].at(2);
                armBuf.QW = orientations[preposition_shell->orientation].at(3);

                n = write(sockfd2,reinterpret_cast<char*>(&armHeader), sizeof(header));
                n = write(sockfd2,&armBuf, sizeof(armBuf));

                //move both left and right arm over
                //move left arm
                armHeader.check = 55; 
                armHeader.seq_number = 2;
                armHeader.timestamp = 0;
                armHeader.isBlocking = 0;
                armHeader.messageType = 3; 

                armBuf.arm = false;
                armBuf.posX = objects[preposition_shell->object].at(0);
                armBuf.posY = objects[preposition_shell->object].at(1) - preposition_shell->distance;
                armBuf.posZ = objects[preposition_shell->object].at(2);
                armBuf.max_joint_vel = preposition_shell->max_joint_vel;

                armBuf.QX = orientations[preposition_shell->orientation].at(0);
                armBuf.QY = orientations[preposition_shell->orientation].at(1);
                armBuf.QZ = orientations[preposition_shell->orientation].at(2);
                armBuf.QW = orientations[preposition_shell->orientation].at(3);

                n = write(sockfd2,reinterpret_cast<char*>(&armHeader), sizeof(header));
                n = write(sockfd2,&armBuf, sizeof(armBuf));

                //move right arm
                armHeader.check = 55; 
                armHeader.seq_number = 2;
                armHeader.timestamp = 1;
                armHeader.isBlocking = 1;
                armHeader.messageType = 3; 

                armBuf.arm = true;
                armBuf.posX = objects[preposition_shell->object].at(0);
                armBuf.posY = objects[preposition_shell->object].at(1) - (preposition_shell->distance + preposition_shell->spacing);
                armBuf.posZ = objects[preposition_shell->object].at(2);
                armBuf.max_joint_vel = preposition_shell->max_joint_vel;

                armBuf.QX = orientations[preposition_shell->orientation].at(0);
                armBuf.QY = orientations[preposition_shell->orientation].at(1);
                armBuf.QZ = orientations[preposition_shell->orientation].at(2);
                armBuf.QW = orientations[preposition_shell->orientation].at(3);

                n = write(sockfd2,reinterpret_cast<char*>(&armHeader), sizeof(header));
                n = write(sockfd2,&armBuf, sizeof(armBuf));



                end_shell->time = 0;
                n = write(newsockfd,reinterpret_cast<char*>(end_shell), sizeof(elapsedTime));

                break;
        	default:
        		ROS_INFO("Invalid Message Type");
                end_shell->time = InvalidMessageType;
                n = write(newsockfd,reinterpret_cast<char*>(end_shell), sizeof(elapsedTime));
                close(newsockfd);
                return 0;


        }

	    fflush(stdout);

    }
}

/*
Method to convert a string of the form "x y z" into a vector of x,y,z
For use with reading files
*/
void splitStringToVector(std::vector<float> * obj, std::string inputString){
    int i = 0;
    std::stringstream ssin(inputString);
    float arr[3];
    while (ssin.good() && i < 3){
        ssin >> arr[i];
        ++i;
    }
    obj->clear();
    obj->push_back(arr[0]);
    obj->push_back(arr[1]);
    obj->push_back(arr[2]);
    return;
}



/*
Method to split a string to a quaternion
*/
void splitStringToQuaternion(std::vector<float> * obj, std::string inputString){
    int i = 0;
    std::stringstream ssin(inputString);
    float arr[4];
    while (ssin.good() && i < 4){
        ssin >> arr[i];
        ++i;
    }   
    obj->clear();
    for (i = 0; i < 4; i++){
        obj->push_back(arr[i]);
    }
    return;
}



/*
Method to get the environment variable associated with a given string
*/
std::string GetEnv( const std::string & var ) {
     const char * val = std::getenv( var.c_str() );
     if ( val == 0 ) {
         return "";
     }
     else {
         return val;
     }
}


