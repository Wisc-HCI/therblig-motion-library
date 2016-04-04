## Therblig Motion Library for PR2 Robot 

This package contains two servers for interacting with the pr2. The first is the 'reciever' executable, which takes in low- level commands to the pr2 and drives the pr2 accordingly. The second server, 'high_level_reciever', can be run on top on the first. This takes in higher level Therblig commands, parses them, and passes them down to the low-level 'reciever' server. 

##Folders:
pr2lib -- this folder <br />
src -- source code for nodes <br />
srv -- source code for services <br />
scripts -- python scripts <br />
launch -- contains launch files <br />
params -- parameter files <br />
bin -- executables location, auto-gen <br />
build --CMake auto-gen <br />
srv_gen -- srv auto-gen <br />


##SETUP:
To build and use this package, you need to have ROS Fuerte installed, which can be done by following the instructions in http://wiki.ros.org/fuerte/Installation/Ubuntu. You will also need to have PR2 installed within ROS. This can be done by following http://wiki.ros.org/Robots/PR2/fuerte. <br />

Check out the package and add the following environment variables to your .bashrc:

`export PR2LIB_PATH=[path_to_pr2lib]` <br />
`export ROS_PACKAGE_PATH=$ROS_PACKAGE_PATH:[path_to_pr2lib]`  

For example, my `[path_to_pr2lib]` is `/home/joe/nsf_nri/workspace/pr2lib`

Then you can build the package with:

`rosmake pr2lib`

The package should build and you should be good to go. There are no strictly runtime dependencies. <br \>

##RUNNING SIMULATOR:

For simulation, make sure the following variables are on your .bashrc

`export ROS_MASTER_URI=http://localhost:11311`  //this is where the ros core will be located <br />
`export ROBOT=sim`  //since we are running the simulator <br />
`export ROS_HOSTNAME=localhost`

Then run the following:

`roslaunch pr2_gazebo pr2_empty_world.launch` // Spawn pr2 in simulation <br />
`rosrun rviz rviz`  // interface to see all the internal states

####Simple control commands
`roslaunch pr2_teleop teleop_keyboard.launch`  // keyboard teleop <br />
`rosrun pr2lib movebase.py`   // move the base of the robot with velocity vector and duration <br />
`rosrun pr2lib head.py`   // change static position of the head <br />
`rosrun pr2lib gripper.py`   // change static position of the head <br />
`rosrun pr2lib torso.py`   // change height of the robot <br />

#### Running the Servers:
There are two ways to use this package, one to parse only low level commands, and one to parse high level commands as well. Run the following commands in sequence on separate terminals.

`roslaunch pr2lib pr2scripts.launch`  //runs some needed pr2 scripts for IK  <br />
`roslaunch pr2lib nodes.launch`   //use this option if you want to have high level parsing available.  Once you do this, you should see the left arm retract.   <br />

If you only want to run the low level server, run the following line instead of `roslaunch pr2lib nodes.launch` :

`roslaunch pr2lib low_level_nodes.launch` //use this option if you only want low level parsing 

<br />
##RUNNING ON ROBOT:
Connect to the robot via its wifi or ethernet cable through the service port.   The robot will assign you an IP.  This will be referred as `[remote_ip]` from now on. Comment out the simulation exports and make sure following additional lines are in YOUR .bashrc (NOT the robot's .bashrc!!)

`export ROS_MASTER_URI=http://10.68.0.1:11311`    // roscore is now located in the robot <br />
`export ROBOT_IP=10.68.0.1`   // robot's ip <br />
`export ROS_IP=[remote_ip]`   // ip robot gave you <br />
`export ROBOT=pr2`

#### Starting the robot and connecting to it

-Turn on the robot (red switch)  <br />
-After four blip sequences, you are ready to ssh.  <br />
`ssh joseph@10.68.0.1`    (get passwd from Joe) <br />
-Run the following in robot terminal <br />
   `robot claim`   <br />
   `robot start` <br />
-Run in *your* terminal: <br />
`rosrun pr2_dashboard pr2_dashboard` // right click the gear button in 'Diagnostic' and click 'Reset'.  The robot may start moving around to calibrate itself.  Make sure nothing is in collision with the robot. <br />



#### Server
Run the following (IK) in the SSH (robot's) terminal:
`roslaunch pr2lib pr2scripts.launch &`   // added & so that you could type 'Enter' and put more commands  <br />
`rosrun pr2lib ik_l &` <br />
`rosrun pr2lib ik_r &` <br />

Run the following on the remote terminal
`rosrun pr2lib reciever` // low-level receiver <br />
`rosrun pr2lib high_level_reciever`   //  at this point, you should see the pr2's left arm move to a default position.<br />

Now the robot is ready to receive sequences from the authoring environment:<br />
`http://nsf-nri.herokuapp.com/`

*Make sure you also have Ethernet connection through the statacenter.*



## Unit tests (optional): 
**Note that these tests currently are basic demonstrations that do not adequately cover all test cases. These programs are designed to be easliy changable, giving the user freedom to edit these files to test specific cases.**

`rosrun pr2lib test_input` //test low level controller  <br />
`rosrun pr2lib high_level_test_input`  //test high level controller  <br />

#### RViz topic for object / location position
`l_gripper_motor_accelerometer_link`

##Socket Interface:
**Both of the servers in this package use TCP connections. This section contains two ICD's (Interface Control Documents) that specify the interfaces presented by the high level and low level servers. When this package is run, the low level reciever connects to the PR2 via ROS (this interface is not described here), and runs a server with the low level ICD described below. Clients can connect to this server directly and manipulate the robot. When the high level reciever is run, it first connects to the low level reciever when is running the low level ICD. The high level reciever then runs a server with the high level ICD, described below. Clients, including the Therblig GUI this package was designed for, can connect to this server and send therblig commands to the PR2.**

### LOW LEVEL ICD: 
**Port 8888. Each message is a 'header + (gripper | arm | twist | end_msg | rotate | driveForward)'. Note that the message type must align with the type of message being sent. Note that some of these structs are defined in the high level ICD below.**

**At the moment, twist messages are not implemented due to difficulty using the arm with the navigation stack. Instead, use the naviation free rotate and driveForward messages. Note that rotate and driveForward are not part of the therblig library, and are provided simply for the convenience of a client who wishes to orient the PR2.**

header: <br />
-short check <br />
-int seq_number <br />
-int timestamp <br />
-bool isBocking <br />
-int messageType (1 = gripper, 2 = twist, 3 = arm, 4 = end_msg, 5 = driveForward, 6 = rotate)<br />

gripper:<br />
-int seq_number<br />
-bool arm (0=right)<br />
-float position (0 closed, 0.065 fully open)<br />
-float max_effort (0->100)<br />

arm: <br />
-int seq_number <br />
-bool arm<br />
-float posX;<br />
-float posY;<br />
-float posZ;<br />
-float QX;<br />
-float QY;<br />
-float QZ;<br />
-float QW;<br />

twist:<br />
-int seq_number; <br />
-float linearX;<br />
-float linearY;<br />
-float linearZ;<br />
-float angularX;<br />
-float angularY;<br />
-float angularZ; <br />


###HIGH LEVEL ICD: 
**Port 9999. This server expects a sequence of command messages followed by an end command. After the end command is recieved and the simulation finishes, it will send a reply elapsedTime message indicating the time between the first command starting and the last command finishing. Note that the simulator will start executing commands as soon as the first command is passed. Each command message is of the form 'command_header + (transport_empty | transport_loaded | grasp | position | release_load | movebase | rotate | driveForward)'. Those definitions can be found in the structs below, and have little endianess (most common).**

**The sequence number of a header and the following message must align. However, it is not checked that sequential messages have sequential sequence numbers.**

**Orientation and Angle ints are enums for different hand positions. Orientation has value either 0 or 1. This corresponds to the gripper being flat to the ground, or vertical (rotated 90 deg either way). Angle has values 0,1,2. 0 means gripper pointed at the ground, 1 means pointer flat, 2 means pointed up.**

**The movebase command is not currently implemented, For driving the robot, use the rotate and driveForward messages. These are blocking and do not use navigation stack, hence no issues while using arms.**

**Error reporting: If an action is invalid for some reason, bad request or invalid IK, the server will send a elasped time respose with a negative value indicating an error. An enum for these values can be found in src/enums.cpp. The server will then terminate its connection to this client, and wait to accept a new client.**

**If the client crashes or disconnects, the server will kill that connection and wait for a new one. It will not reset the robot position.**

command_header: <br />
-short check;<br />
-int seq_number;<br />
-int timestamp;<br />
-int messageType; (0 = transport_empty, 1 = transport_loaded, 2 = grasp, 3 = position, 4 = release_load, 5 = movebase, 6 = retract, 7 = use_breaker, 8 = end_msg, 9 = rotate, 10 = driveForward) <br />

transport_empty:<br />
-int seq_number;<br />
-int object;<br />
-int orientation;<br />
-int angle;<br />
-int arm; <br />
-float max_joint_vel;<br />s

transport_loaded:<br />
-int seq_number;<br />
-int position;<br />
-int arm;<br />
-float max_joint_vel;<br />

grasp:<br />
-int seq_number;<br />
-int effort;<br />
-int arm;<br />


position:<br />
-int seq_number;<br />
-int orientation;<br />
-int angle;<br />
-int arm;<br />
-float max_joint_vel;<br />

release_load:<br />
-int seq_number;<br />
-int arm; <br />

retract:<br />
-int seq_number;<br />
-int arm;<br />

use_breaker:<br />
-int arm;<br />
-int size;<br />

movebase:<br />
-int seq_number;<br />
-double relativeX;<br />
-double relativeY;<br />
-double relativeZ;<br />

elapsedTime:<br />
-double time;<br />

rotate:<br />
-int seq_number;<br />
-bool clockwise;<br />
-double radians;<br />

driveForward:<br />
-int seq_number;<br />
-double distance; <br />

