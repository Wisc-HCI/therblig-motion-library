## Therblig Motion Library for Mico Robot 

This package contains code for interacting with the Mico arm. All the useful code can be found in wpi_jaco/src/mypak/scripts.<br />


##Folders:
mico -- this folder <br />
wpi_jaco -- contains all the code<br />
devel -- standard catkin workspace devel folder (source devel/setup.bash)<br />
build -- standard catkin workspace build folder<br />
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



