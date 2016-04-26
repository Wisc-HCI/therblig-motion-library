#!/usr/bin/env python

import rospy
import moveit_commander
import moveit_msgs.msg
from sensor_msgs.msg import JointState
from mico_gripperControl import MicoGripperControl


################
# Class to handle all the actions taken
class ActionHandler:

    ################
    # Initializes the MoveGroupCommander, PlannerID, and EndEffector
    def __init__(self, group_name, planner_name, ee_link):

         self.group = moveit_commander.MoveGroupCommander(group_name)
         self.group.set_planner_id(planner_name)   
         self.group.set_end_effector_link(ee_link)

         self.grip = MicoGripperControl()
         self.grip_position = 0

         #object the arm is holding 0 = none 
         self.loaded = 0
 
         #orientation of the hold, above=1 or side=0
         self.orientation = -1

         #is the arm in the ready position         
         self.ready = True


         self.joints = self.current_joints()
         self.pose = self.current_pose()


####################
# THERBLIGS

    ################
    # Reaching for an object with an empty hand
    # Preperation for grasp
    #
    # Arguments : arm (int) = id of the arm being used
    #             position (list) = goal position, either [xyz, xyzw] or JointState           
    # 
    # Return : True if the arm moved to the correct position
    def Transport_Empty(self, arm, position):
        success = False

        try:
            if isinstance(arm, int):

                # this is the code for the mico arm
                if arm == 4:            
                    # open the gripper
                    self.Grasp(arm, 0, 1.0)
                    self.grip_position = 0
                    # move the arm   
                    #plan = self.plan(position)
                    #self.execute_plan(plan)
                    self.group.set_start_state_to_current_state()
                    self.group.go(position)
                    success = True

            else:
                print("USAGE ERROR : please specify which arm is being used (ex : mico => 4)")

        except Exception as e:
            print("*EXCEPTION OCCURRED* - attempted to move arm")
            print(e)


        return success

    ################
    # Grasping an object
    #
    # Arguments : arm (int) = id of the arm being used
    #             position (int) = position of the gripper
    #             effort (int) = grasp pressure
    #
    # Return : True if the object was grasped
    def Grasp(self, arm, position, effort):
        success = False

        try:
            if isinstance(arm, int):

                # this is the code for the mico arm
                # Grip is in range 0 - 7200 for mico arm
                if arm == 4:             
                    if (position <= 100) and (position >= 0):
                        position = 72 * position # 7200*position/100
                        self.grip.setGripTo(position, effort)
                        self.grip.wait()
                        self.grip_position = position
                        success = True 
                    else:
                        print("USAGE ERROR : grip values chould be in range(0,100) inclusive")
             
                # elif for other arms
            
            else:
                print("USAGE ERROR : please specify which arm is being used (ex : mico => 4)")
        
        except Exception as e:
            print("*EXCEPTION OCCURED* - tried to move gripper")
            print(e)

        return success

    ################
    # Moving a grapsed object using a hand motion
    #
    # Arguments : arm (int) = id of the arm being used
    #             position (list) = the goal position
    #
    # Return : True if the arm moves correctly
    def Transport_Loaded(self, arm, position):
        success = False
 
        try:
            if isinstance(arm, int):

                # this is the code for the mico arm
                if arm == 4:            
                    # move the arm   
                    #plan = self.plan(position)
                    #self.execute_plan(plan)
                    self.group.set_start_state_to_current_state()
                    self.group.go(position)
                    success = True

            else:
                print("USAGE ERROR : please specify which arm is being used (ex : mico => 4)")

        except Exception as e:
            print("*EXCEPTION OCCURRED* - attempted to move arm")
            print(e)

        return success

    ################
    # Positioning and/or orienting an end effector
    #
    # Arguments : arm (int) = id of the arm being used
    #             position (list) = orientation change of the end effector
    #
    # Return : True if the end effector is positioned corretly
    def Position(self, arm, position):
        success = False

        try:
            if isinstance(arm, int):

                # this is the code for the mico arm
                if arm == 4:            
                    # move the arm   
                    #plan = self.plan(position)
                    #self.execute_plan(plan)
                    self.group.set_start_state_to_current_state()
                    self.group.go(position)
                    success = True

            else:
                print("USAGE ERROR : please specify which arm is being used (ex : mico => 4)")

        except Exception as e:
            print("*EXCEPTION OCCURRED* - attempted to position arm")
            print(e)

        return success

    ################
    # Releasing control of an object
    #
    # Arguments : arm (int) = id of the arm being used
    #             
    # Return : True if the object is released
    def Release_Load(self, arm):
        success = False
  
        try:
            if isinstance(arm, int):

                # this is the code for the mico arm
                # Grip is in range 0 - 6400 for mico arm
                if arm == 4:             
                    self.grip.setGripTo(0, 1.0)
                    self.grip.wait()
                    self.grip_position = 0
                    success = True     
                    self.loaded = False                           
                # elif for other arms
            
            else:
                print("USAGE ERROR : please specify which arm is being used (ex : mico => 4)")
        
        except Exception as e:
            print("*EXCEPTION OCCURED* - tried to move gripper")
            print(e)

        return success

    ################
    # Hold a grasp while another hand performs a function
    #
    # Arguments : arm (int) = id of the arm being used
    #             duration (float) = time to wait
    #
    # Return : True if grasp is held
    def Hold(self, arm, duration):
        success = False
 
        return success




####################
# PLANNING AND MOVEMENT FUNCTIONS

    ################
    # Executes the plan of the real arm
    #
    # Arguments : plan (plan pbject) = the plan to execute
    #
    # Return : True if the plan was executed
    def execute_plan(self, plan):
        return self.group.execute(plan)

    ###############
    # Plan motion based on a set of end positions
    #
    # Arguments: positions (list) = the end positions
    #
    # Return : Returns a the plan    
    def plan(self, positions):
        return self.group.plan(positions)


    def set_start(self):
        self.group.set_start_state_to_current_state()
        return True


####################
# ARM STATE FUNCTIONS

    ################
    # Get the current arm roll, pitch, yaw 
    #
    # Return : Returns the current arm rpy
    def current_rpy(self):
        return self.group.get_current_rpy()
 
    ################
    # Get the current arm pose 
    #
    # Return : Returns the current arm pose
    def current_pose(self):
        return self.group.get_current_pose()

    ################
    # Get the current arm joint values
    #
    # Return : Returns the current joint values as an array
    def current_joints(self):
        return self.group.get_current_joint_values()

    ################
    # Get the current arm joint state
    #
    # Return : Returns the current joint state
    def current_jointState(self):
        js = JointState()
        js.name = ['mico_joint_1','mico_joint_2','mico_joint_3','mico_joint_4','mico_joint_5','mico_joint_6']
        js.position = self.current_joints() + self.current_rpy()
        return js
 

    def planning_frame(self):
        return self.group.get_planning_frame()
  








