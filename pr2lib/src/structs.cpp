/*
Code to have structs needed to send and recieve
*/

//15 bytes
struct header{
	short check;  
	int seq_number;
	int timestamp;
	bool isBlocking;
	int messageType; 
}__attribute__((packed));

//21 bytes 
struct gripper{
	int seq_number; 
	bool arm;
	float position;
	float max_effort;  
}__attribute__((packed));


//52 bytes 
struct twist{
	int seq_number; 
	float linearX;
	float linearY;
	float linearZ;

	float angularX;
	float angularY;
	float angularZ; 
}__attribute__((packed));
 

//61 bytes 
struct arm{
	int seq_number;
	bool arm; 
	float posX;
	float posY;
	float posZ;

	float QX;
	float QY;
	float QZ;
	float QW; 

	float max_joint_vel;
}__attribute__((packed));

struct elapsedTime{
	double time;
}__attribute__((packed));

struct driveForward{
	int seq_number;
	double distance;
}__attribute__((packed));

struct rotate{
	int seq_number;
	bool clockwise;
	double radians;
}__attribute__((packed));