/*
Packet format: to send a message, send first a header then a message. Sockets are not threadsafe
*/

/*
check: set to a constant value, 55 in our case, to make sure that messages are parsed properly
seq_number: used to make sure consecutive header/data packets are properly ordered
timestamp: the time the message was sent
messageType: an enum for the type of message.
*/
//14 bytes
struct command_header{
	short check;  
	int seq_number;
	int timestamp;
	int messageType; 
}__attribute__((packed));


struct transport_empty{
	int seq_number;
	int object;
	int orientation;
	int angle;
	int arm;
	float max_joint_vel;
}__attribute__((packed));


struct transport_loaded{
	int seq_number;
	int position;
	int arm;
	float max_joint_vel;
}__attribute__((packed));

struct grasp{
	int seq_number;
	int effort;
	int arm;
}__attribute__((packed));

struct position{
	int seq_number;
	int orientation;
	int angle;
	int arm;
	float max_joint_vel;
}__attribute__((packed));

struct release_load{
	int seq_number;
	int arm; 
}__attribute__((packed));

struct preposition{
	int seq_number;
	int object;
	int orientation;
	float spacing;
	float distance;
	float max_joint_vel;
}__attribute__((packed));

struct use_breaker{
	int seq_number;
	int size;
	int arm;
}__attribute__((packed));

struct retract{
	int seq_number;
	int arm;
	float max_joint_vel;
}__attribute__((packed));

struct movebase{
	int seq_number;
	double relativeX;
	double relativeY;
	double relativeZ;
}__attribute__((packed));
