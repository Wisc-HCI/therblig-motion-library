#!/bin/bash
echo "Source.."
source ~/Documents/John/nri-authoring-environment/wpi_jaco/devel/setup.bash
sleep 1

echo "Launch.."
./run_plans.py plans/StartupPlan
./run_plans.py plans/TransEmpty_1_1
./run_plans.py plans/Grasp_60
./run_plans.py plans/TransLoadedUp_1_1
./run_plans.py plans/TransLoadedDown_3_1
