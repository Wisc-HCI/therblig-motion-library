#Instructions on how to get positions and plans, and how to run them

RUN RZIV - ALWAYS DO THIS!!
1 - cd ~/Documents/John/nri-authoring-environment/wpi_jaco
2 - source devel/setup.bash
3 - roslaunch mico_moveit_config path_planning.launch

SAVE POSITION TO THE FILE save_pos.txt
1 - cd ~/Documents/John/nri-authoring-environment/wpi_jaco/src/mypak/scripts
2 - source ~/Documents/John/nri-authoring-environment/wpi_jaco/devel/setup.bash
3 - Make sure you are okay overwriting data in save_pos.txt (if1 - cd ~/Documents/John/nri-authoring-environment/wpi_jaco/src/mypak/scripts
4 - Run ./save_pos.py
5 - Follow instructions in terminal to save positions and grasp value not, cp save_pos.txt SOME_FILE_NAME.txt)

CONVERT SAVED POSITIONS INTO SAVED PLANS -> saved to the save_plan.txt file
1 - cd ~/Documents/John/nri-authoring-environment/wpi_jaco/src/mypak/scripts
2 - source ~/Documents/John/nri-authoring-environment/wpi_jaco/devel/setup.bash
3 - Make sure you are okay overwriting data in save_plans.txt (if not, cp save_plans.txt SOME_FILE_NAME.txt)
4 - Run ./save_plans.py saved_pos.txt
5 - Let it run, it will run through each positions once, planning in between each move

RUNNING SAVED PLANS FROM THE FILE saved_plans.txt
1 - cd ~/Documents/John/nri-authoring-environment/wpi_jaco/src/mypak/scripts
2 - source ~/Documents/John/nri-authoring-environment/wpi_jaco/devel/setup.bash
3 - Run ./run_plans saved_plans.txt
4 - It will run through the positions fairly fast
