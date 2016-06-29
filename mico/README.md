## Therblig Motion Library for Mico Robot 

This package contains code for interacting with the Mico arm. All the useful code can be found in wpi_jaco/src/mypak/scripts.<br />

**_ROS Indigo_** is required to use this project

##Workspace setup and important info
To install, clone this branch (build-ready)
1. [Install the Kinova SDK MICO (not mico2)](http://www.kinovarobotics.com/service-robotics/products/software/)
2. [Add this file to /etc/udev/rules.d/](https://github.com/Kinovarobotics/kinova-ros/blob/master/jaco_driver/udev/99-jaco-arm.rules)
3. Naviate to the source directory to init the workspace
...`cd /path/to/therblig-motion-library/mico/wpi_jaco/src`
4. Have to do this before using catkin
...`source /opt/ros/indigo/setup.sh`
5. init the workspace 
...`catkin_init_workspace`
6. and finally make the project
...`cd ..`
...`catkin_make`


Building should take a few minutes, but after that it is all set!


/therblig-motion-library/mico/wpi_jaco/ is the catkin workspace for the mico arm


**Important** make sure that you add the **build/** and **devel/** folders to your git ignore,
otherwise the project will not build on other machines unless they are first deleted.


Make sure to set the paths properly in runRviz.sh if you plan on using that



##Folders:
mico -- this folder <br />
wpi_jaco -- contains all the code<br />
src -- source code for nodes <br />
mypak/scripts -- contains all the team written code and executables<br />
dump -- basically a trash folder for filed to be deleted<br />
gripper_tester -- contains files for testing the mico gripper funtionality<br />
oldfiles and oldtext -- files from earlier experiments <br />
plans -- folder to store saved plans<br />

##Important Files:

runRviz.py -- launches background nodes needed for arm motion.<br />
`./runRviz.py`

actions.py -- the action handler AIP code. Therbligs defined here. Defines ActionHandler object.<br />
mico_gripperControl.py -- code to control the gripper function of the arm. Defines MicoGripperControl object.<br />

mico_server.py -- runs the server to translate therbligs to low level arm commands.<br />

run_plans.py -- takes a plan as input and runs it. <br />
`./run_plans.py [PATH TO PLAN TO RUN]`

save_plans.py -- takes a text file of positions and grips and converts them into plans. Outputs plans to saved_plans.txt.<br />
`./save_plans.py [PATH TO POSITION FILE]`

save_pos.py -- simple tool used to save arm position to a file. Ounputs results to saved_pos.txt.<br />
`./save_pos.py`

##How to Run Code:

Initialize Step:<br />
	`source ~/Documents/John/nri-authoring-environment/wpi_jaco/devel/setup.bash`<br />
	`./runRviz.py`<br />

Create a Plan from scratch:<br />
	Use save_pos.py to get positions:<br />
		`./save_pos.py`<br />
	Use save_plans.py to convert saved positions:<br />
		`./save_plans.py saved_pos.txt`<br />
	Use run_plans.py to test the plans:
		`./run_plans.py saved_plans.txt`<br />
	Copy the plans to a file of your choice:<br />
		`cp saved_plans.py plans/[YOUR PLAN NAME]`



