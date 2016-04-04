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
#include "high_level_structs.cpp"

#define PORT 9999

int main(){

//###################SOCKET SETUP####################################
    int sockfd;
    struct sockaddr_in serv_addr;
    struct hostent *server;


    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0){
    	printf("Could not open socket\n");
    	return 0;
    }
    server = (struct hostent *) gethostbyname((char *)"127.0.0.1");
    bzero((char *) &serv_addr, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    bcopy((char *)server->h_addr, 
         (char *)&serv_addr.sin_addr.s_addr,
         server->h_length);
    serv_addr.sin_port = htons(PORT);
    if (connect(sockfd,(struct sockaddr *) &serv_addr,sizeof(serv_addr)) < 0){
    	printf("Error connecting");
    	return 0; 
    }

//#################INITIALIZE STRUCTS FOR DEMO#################################
	
	command_header movebase_header;
	movebase_header.check = 55;
	movebase_header.seq_number = 0;
	movebase_header.timestamp = 0;
	movebase_header.messageType = 5;

	movebase movebase_msg;
	movebase_msg.seq_number = 0;
	movebase_msg.relativeX = 10;
	movebase_msg.relativeY = 0;
	movebase_msg.relativeZ = 0;

	command_header transport_empty_header;
	transport_empty_header.check = 55;
	transport_empty_header.seq_number = 0;
	transport_empty_header.timestamp = 0;
	transport_empty_header.messageType = 0;

	transport_empty transport_empty_msg;
	transport_empty_msg.seq_number = 0;
	transport_empty_msg.object = 3;
	transport_empty_msg.orientation = 1;
	transport_empty_msg.angle = 1;
	transport_empty_msg.arm = false; 
    transport_empty_msg.max_joint_vel = 0.75;

	command_header grasp_header;
	grasp_header.check = 55;
	grasp_header.seq_number = 0;
	grasp_header.timestamp = 0;
	grasp_header.messageType = 2;

	grasp grasp_msg;
	grasp_msg.seq_number = 0;
	grasp_msg.arm = false;
	grasp_msg.effort = 100;

	command_header transport_loaded_header;
	transport_loaded_header.check = 55;
	transport_loaded_header.seq_number = 0;
	transport_loaded_header.timestamp = 0;
	transport_loaded_header.messageType = 1;

	transport_loaded transport_loaded_msg;
	transport_loaded_msg.seq_number = 0;
	transport_loaded_msg.position = 1;
	transport_loaded_msg.arm = false;
    transport_loaded_msg.max_joint_vel = 0.6;

	command_header release_load_header;
	release_load_header.check = 55;
	release_load_header.seq_number = 0;
	release_load_header. timestamp = 0;
	release_load_header.messageType = 4;

	release_load release_load_msg;
	release_load_msg.seq_number = 55;
	release_load_msg.arm = false;

	command_header retract_header;
	retract_header.check = 55;
	retract_header.seq_number = 0;
	retract_header. timestamp = 0;
	retract_header.messageType = 6;

	retract retract_msg;
	retract_msg.seq_number = 0;
	retract_msg.arm = false;
    retract_msg.max_joint_vel = 0.4;

	command_header rotate_header;
	rotate_header.check = 55;
	rotate_header.seq_number = 0;
	rotate_header.timestamp = 0;
	rotate_header.messageType = 9;

	rotate rotate_msg;
	rotate_msg.clockwise = true;
	rotate_msg.radians = 1.5;

	command_header forward_header;
	forward_header.check = 55;
	forward_header.seq_number = 0;
	forward_header.timestamp = 0;
	forward_header.messageType = 10;

	driveForward forward_msg;
	forward_msg.distance = 5;


    command_header preposition_header;
    preposition_header.check = 55;
    preposition_header.seq_number = 0;
    preposition_header.timestamp = 0;
    preposition_header.messageType = 11;

    preposition preposition_msg;
    preposition_msg.seq_number = 0;
    preposition_msg.object = 5;
    preposition_msg.orientation = 1;
    preposition_msg.max_joint_vel = 0.5;
    preposition_msg.distance = 0.2;
    preposition_msg.spacing = 0.2;

	//for recieved data
	char time_buf[sizeof(elapsedTime)];
	elapsedTime * time_shell;
	int count = 0;
	char send_data[1024];
	while (count < 10){

    printf("Hit enter to send packet. Type q or Q to quit. \n");
    gets(send_data);

    if ((strcmp(send_data , "q") == 0) || strcmp(send_data , "Q") == 0)
       break;

    else{
        write(sockfd, reinterpret_cast<char*>(&preposition_header), sizeof(command_header));
        write(sockfd, reinterpret_cast<char*>(&preposition_msg), sizeof(preposition));
        read(sockfd, time_buf, sizeof(time_buf));
        time_shell = reinterpret_cast<elapsedTime*>(&time_buf);
        printf("TPreposition took %lf seconds\n", time_shell->time);
        /*
        //left arm move to obj 3
        write(sockfd, reinterpret_cast<char*>(&transport_empty_header), sizeof(command_header));
        write(sockfd, reinterpret_cast<char*>(&transport_empty_msg), sizeof(transport_empty));
        read(sockfd, time_buf, sizeof(time_buf));
        time_shell = reinterpret_cast<elapsedTime*>(&time_buf);
        printf("Transport Empty took %lf seconds\n", time_shell->time);
        //left arm pick up obj 3
        write(sockfd, reinterpret_cast<char*>(&grasp_header), sizeof(command_header));  
        write(sockfd, reinterpret_cast<char*>(&grasp_msg), sizeof(grasp));
        read(sockfd, time_buf, sizeof(time_buf));
        time_shell = reinterpret_cast<elapsedTime*>(&time_buf);
        printf("Grasp took %lf seconds\n", time_shell->time);

        //left arm move to place 1
        write(sockfd, reinterpret_cast<char*>(&transport_loaded_header), sizeof(command_header));
        write(sockfd, reinterpret_cast<char*>(&transport_loaded_msg), sizeof(transport_loaded));
        read(sockfd, time_buf, sizeof(time_buf));
        time_shell = reinterpret_cast<elapsedTime*>(&time_buf);
        printf("Transport Loaded took %lf seconds\n", time_shell->time);
        //left arm release obj 1
        write(sockfd, reinterpret_cast<char*>(&release_load_header), sizeof(command_header));
        write(sockfd, reinterpret_cast<char*>(&release_load_msg), sizeof(release_load));
        read(sockfd, time_buf, sizeof(time_buf));
        time_shell = reinterpret_cast<elapsedTime*>(&time_buf);
        printf("Release Load took %lf seconds\n", time_shell->time);

        write(sockfd, reinterpret_cast<char*>(&transport_empty_header), sizeof(command_header));
        write(sockfd, reinterpret_cast<char*>(&transport_empty_msg), sizeof(transport_empty));
        read(sockfd, time_buf, sizeof(time_buf));
        time_shell = reinterpret_cast<elapsedTime*>(&time_buf);
        printf("Transport Empty took %lf seconds\n", time_shell->time);

    	//rotate
    	write(sockfd, reinterpret_cast<char*>(&rotate_header), sizeof(command_header));
    	write(sockfd, reinterpret_cast<char*>(&rotate_msg), sizeof(rotate));
    	read(sockfd, time_buf, sizeof(time_buf));
    	time_shell = reinterpret_cast<elapsedTime*>(&time_buf);
    	printf("Rotate took %lf seconds\n", time_shell->time);
    	//drive forwards
    	write(sockfd, reinterpret_cast<char*>(&forward_header), sizeof(command_header));
    	write(sockfd, reinterpret_cast<char*>(&forward_msg), sizeof(driveForward));
    	read(sockfd, time_buf, sizeof(time_buf));
    	time_shell = reinterpret_cast<elapsedTime*>(&time_buf);
    	printf("Drive Forward took %lf seconds\n", time_shell->time);

    	//left arm move to obj 1
    	write(sockfd, reinterpret_cast<char*>(&transport_empty_header), sizeof(command_header));
    	write(sockfd, reinterpret_cast<char*>(&transport_empty_msg), sizeof(transport_empty));
    	read(sockfd, time_buf, sizeof(time_buf));
    	time_shell = reinterpret_cast<elapsedTime*>(&time_buf);
    	printf("Transport Empty took %lf seconds\n", time_shell->time);
    	//left arm pick up obj 1
    	write(sockfd, reinterpret_cast<char*>(&grasp_header), sizeof(command_header));	
    	write(sockfd, reinterpret_cast<char*>(&grasp_msg), sizeof(grasp));
    	read(sockfd, time_buf, sizeof(time_buf));
    	time_shell = reinterpret_cast<elapsedTime*>(&time_buf);
    	printf("Grasp took %lf seconds\n", time_shell->time);

        
    	//left arm move to place 1
    	write(sockfd, reinterpret_cast<char*>(&transport_loaded_header), sizeof(command_header));
    	write(sockfd, reinterpret_cast<char*>(&transport_loaded_msg), sizeof(transport_loaded));
    	read(sockfd, time_buf, sizeof(time_buf));
    	time_shell = reinterpret_cast<elapsedTime*>(&time_buf);
    	printf("Transport Loaded took %lf seconds\n", time_shell->time);
    	//left arm release obj 1
    	write(sockfd, reinterpret_cast<char*>(&release_load_header), sizeof(command_header));
    	write(sockfd, reinterpret_cast<char*>(&release_load_msg), sizeof(release_load));
    	read(sockfd, time_buf, sizeof(time_buf));
    	time_shell = reinterpret_cast<elapsedTime*>(&time_buf);
    	printf("Release Load took %lf seconds\n", time_shell->time);
    	//left arm retract
    	write(sockfd, reinterpret_cast<char*>(&retract_header), sizeof(command_header));
    	write(sockfd, reinterpret_cast<char*>(&retract_msg), sizeof(retract));
    	read(sockfd, time_buf, sizeof(time_buf));
    	time_shell = reinterpret_cast<elapsedTime*>(&time_buf);
    	printf("Retract took %lf seconds\n", time_shell->time);
    	//right arm move to obj 1
    	transport_empty_msg.arm = true;
 		write(sockfd, reinterpret_cast<char*>(&transport_empty_header), sizeof(command_header));
 		write(sockfd, reinterpret_cast<char*>(&transport_empty_msg), sizeof(transport_empty));
    	read(sockfd, time_buf, sizeof(time_buf));
    	time_shell = reinterpret_cast<elapsedTime*>(&time_buf);
    	printf("Transport Empty took %lf seconds\n", time_shell->time);
 		//right arm pick up obj 1
 		grasp_msg.arm = true;
 		write(sockfd, reinterpret_cast<char*>(&grasp_header), sizeof(command_header));
 		write(sockfd, reinterpret_cast<char*>(&grasp_msg), sizeof(grasp));
 		read(sockfd, time_buf, sizeof(time_buf));
    	time_shell = reinterpret_cast<elapsedTime*>(&time_buf);
    	printf("Grasp took %lf seconds\n", time_shell->time);
 		//right arm to place 2
 		transport_loaded_msg.position = 2;
		transport_loaded_msg.arm = true;
 		write(sockfd, reinterpret_cast<char*>(&transport_loaded_header), sizeof(command_header));
 		write(sockfd, reinterpret_cast<char*>(&transport_loaded_msg), sizeof(transport_loaded));
    	read(sockfd, time_buf, sizeof(time_buf));
    	time_shell = reinterpret_cast<elapsedTime*>(&time_buf);
    	printf("Transport Loaded took %lf seconds\n", time_shell->time);
 		//right arm release obj 1
 		release_load_msg.arm = true;
  		write(sockfd, reinterpret_cast<char*>(&release_load_header), sizeof(command_header));
  		write(sockfd, reinterpret_cast<char*>(&release_load_msg), sizeof(release_load));
  		read(sockfd, time_buf, sizeof(time_buf));
    	time_shell = reinterpret_cast<elapsedTime*>(&time_buf);
    	printf("Release Load took %lf seconds\n", time_shell->time);
  		//right arm retract
  		retract_msg.arm = true;
 		write(sockfd, reinterpret_cast<char*>(&retract_header), sizeof(command_header));
 		write(sockfd, reinterpret_cast<char*>(&retract_msg), sizeof(retract));
    	read(sockfd, time_buf, sizeof(time_buf));
    	time_shell = reinterpret_cast<elapsedTime*>(&time_buf);
    	printf("Retract took %lf seconds\n", time_shell->time);
 		//send end command to query time
 		retract_header.messageType = 8;
  		write(sockfd, reinterpret_cast<char*>(&retract_header), sizeof(command_header));
  		//recieve the overall time
		read(sockfd, time_buf, sizeof(time_buf));
		time_shell = reinterpret_cast<elapsedTime*>(&time_buf);
		printf("Total time was %lf seconds\n", time_shell->time);
*/
		count += 1; 
    	}
        
     
    }
    close(sockfd);

}