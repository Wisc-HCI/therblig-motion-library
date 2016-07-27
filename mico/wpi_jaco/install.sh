wget https://doc-0g-58-docs.googleusercontent.com/docs/securesc/ha0ro937gcuc7l7deffksulhg5h7mbp1/8kv47bc9nrt5fgskejprlr56kpne46ar/1469620800000/07475894368354933854/*/0B5d8FVDq3A-XTHpXa2F3c3p1RFk?e=download
mv 0B5d8FVDq3A-XTHpXa2F3c3p1RFk?e=download KINOVA\ SDK\ MICO.zip
unzip KINOVA\ SDK\ MICO\.zip
cd KINOVA\ SDK\ MICO/Ubuntu/64\ bits/
chmod +x installSDK64.sh mico1Install64_1.0.0
./installSDK64.sh
sudo echo SUBSYSTEM=="usb", ENV{DEVTYPE}=="usb_device",ATTRS{idVendor}=="22cd", MODE="0666" > /etc/udev/rules.d/99-jaco-arm.rules
sudo apt-get install ros-indigo-rail-manipulation-msgs
source /opt/ros/indigo/setup.sh
catkin_make
source devel/setup.sh
rosdep install --from-paths src --ignore-src --rosdistro=indigo -y
catkin_make

