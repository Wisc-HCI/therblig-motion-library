/*
Code to simulate socket input 
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>


#include "structs.cpp"

#define PORT 8888

int main(){

//###################SOCKET SETUP####################################
	int sock;
	struct sockaddr_in server_addr;
	struct hostent *host;
	char send_data[1024];

	host= (struct hostent *) gethostbyname((char *)"127.0.0.1");

	if ((sock = socket(AF_INET, SOCK_DGRAM, 0)) == -1){
		perror("socket");
		exit(1);
	}

	server_addr.sin_family = AF_INET;
	server_addr.sin_port = htons(PORT);
	server_addr.sin_addr = *((struct in_addr *)host->h_addr);
	bzero(&(server_addr.sin_zero),8);
//#################END SOCKET SETUP#################################

	//create sample messages
	header gripHeader;
	gripHeader.check = 55; //always set this to be safe;
	gripHeader.seq_number = 1;
	gripHeader.timestamp = 25;
	gripHeader.isBlocking = 1;
	gripHeader.messageType = 1; 

	gripper sampleGripper;
	sampleGripper.seq_number = 1;
	sampleGripper.arm = true;  
	sampleGripper.position = 0.06;
	sampleGripper.max_effort = 100.0; 


	header twistHeader;
	twistHeader.check = 55; //always set this to be safe;
	twistHeader.seq_number = 2;
	twistHeader.timestamp = 25;
	twistHeader.isBlocking = 1;
	twistHeader.messageType = 2; 

	twist sampleTwist;
	sampleTwist.linearX = 10;
	sampleTwist.linearY = 0;
	sampleTwist.linearZ = 0;
	sampleTwist.angularX = 1;
	sampleTwist.angularY = 0;
	sampleTwist.angularZ = 0; 

	header armHeader;
	armHeader.check = 55; //always set this to be safe;
	armHeader.seq_number = 2;
	armHeader.timestamp = 25;
	armHeader.isBlocking = 1;
	armHeader.messageType = 3; 

	arm sampleArm;
	sampleArm.arm = true; 
	sampleArm.posX = 0.75;
	sampleArm.posY = -0.19;
	sampleArm.posZ = 0.8;
	sampleArm.QX = 0.02;
	sampleArm.QY = 0.09;
	sampleArm.QZ = 0.0;
	sampleArm.QW = 1.0; 
	

	//cast structs to chars - only do checksum once, not currently implemented 
	char* gripHeaderBuf = reinterpret_cast<char*>(&gripHeader);
	char* gripperBuf = reinterpret_cast<char*>(&sampleGripper); 


	char * twistHeaderBuf = reinterpret_cast<char*>(&twistHeader);
	char * twistBuf = reinterpret_cast<char*>(&sampleTwist); 

	char * armHeaderBuf = reinterpret_cast<char*>(&armHeader); 
	char * armBuf = reinterpret_cast<char*>(&sampleArm); 


	while (1){

    printf("Hit enter to send packet. Type q or Q to quit. \n");
    gets(send_data);

    if ((strcmp(send_data , "q") == 0) || strcmp(send_data , "Q") == 0)
       break;

    else{
    	//sending gripper command 
    	sendto(sock, gripHeaderBuf, 15, 0, (struct sockaddr *)&server_addr, sizeof(struct sockaddr));
    	sendto(sock, gripperBuf, 21, 0, (struct sockaddr *)&server_addr, sizeof(struct sockaddr));

    	//send arm command
    	sendto(sock, armHeaderBuf, 15, 0, (struct sockaddr *)&server_addr, sizeof(struct sockaddr));
    	sendto(sock, armBuf, 60, 0, (struct sockaddr *)&server_addr, sizeof(struct sockaddr));

    	//send drive forward command

    	//send rotate command



    }
     
    }

	//used to make sure the conversion to cpp is compiling 
	printf("testing\n"); 

}