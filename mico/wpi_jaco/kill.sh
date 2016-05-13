#!/bin/bash

###
# This tool was built my Chein-ming, grad student from a few years ago.
# I'm not sure how it works but it is useful in killing python processes.

echo "Killing project related processes..."

pid=`ps aux |grep python | awk '{print $2}'`
exe=`ps aux |grep python | awk '{print $11}'`
path=`ps aux |grep python | awk '{print $12}'`
ps aux |grep python | awk '{print $2 ";" $11 ";" $12}' >> ps.temp

IFS=";"
counter=0
ppid=0
eexe=""
ppath=""
while read line
do 
	#echo $line
	for item in $line;
	do
		if [ $counter -eq 0 ]; then
			ppid=$item
		elif [ $counter -eq 1 ]; then
			eexe=$item
		elif [ $counter -eq 2 ]; then
			ppath=$item
			#echo "pid= "$ppid
			#echo "exe= "$eexe
			#echo "path= "$ppath
			if [ $eexe == "/usr/bin/python" ]; then
				if [ $ppath == "/opt/ros/indigo/bin/roslaunch" ] || [ $ppath == "/opt/ros/indigo/bin/rosmaster" ] || [ $ppath == "/opt/ros/indigo/bin/roscore" ]; then
					kill -9 $ppid
				fi
			fi
			counter=0
			continue
		fi
		counter=`expr $counter + 1`
	done
done <ps.temp

rm ps.temp
#ps aux | grep python
ps aux |grep wakamaru | awk '{print $2 ";" $11}' >> ps.temp
counter=0
ppid=0
eexe=""
ppath=""
while read line
do 
	#echo $line
	for item in $line;
	do
		if [ $counter -eq 0 ]; then
			ppid=$item
		elif [ $counter -eq 1 ]; then
			eexe=$item
			#echo "pid= "$ppid
			#echo "exe= "$eexe
			#echo "path= "$ppath
			if [ $eexe == "./wakamaru_listener" ]; then
				kill $ppid
			fi
			counter=0
			continue
		fi
		counter=`expr $counter + 1`
	done
done <ps.temp

rm ps.temp
#ps aux | grep python

ps aux |grep rosout | awk '{print $2 ";" $11}' >> ps.temp
counter=0
ppid=0
eexe=""
ppath=""
while read line
do 
	#echo $line
	for item in $line;
	do
		if [ $counter -eq 0 ]; then
			ppid=$item
		elif [ $counter -eq 1 ]; then
			eexe=$item
			#echo "pid= "$ppid
			#echo "exe= "$eexe
			#echo "path= "$ppath
			if [ $eexe == "/opt/ros/indigo/lib/rosout/rosout" ]; then
				kill $ppid
			fi
			counter=0
			continue
		fi
		counter=`expr $counter + 1`
	done
done <ps.temp

rm ps.temp


ps aux |grep jaco | awk '{print $2 ";" $11}' >> ps.temp
counter=0
ppid=0
eexe=""
ppath=""
while read line
do 
	#echo $line
	for item in $line;
	do
		if [ $counter -eq 0 ]; then
			ppid=$item
		elif [ $counter -eq 1 ]; then
			eexe=$item
			#echo "pid= "$ppid
			#echo "exe= "$eexe
			#echo "path= "$ppath
			if [ $eexe == "/home/hcilab/catkin_ws/devel/lib/jaco_driver/jaco_arm_driver" ] || [ $eexe == "/home/hcilab/catkin_ws/devel/lib/jaco_driver/jaco_tf_updater" ]; then
				kill $ppid
			fi
			counter=0
			continue
		fi
		counter=`expr $counter + 1`
	done
done <ps.temp

rm ps.temp

ps aux |grep jaco | awk '{print $2 ";" $11}' >> ps.temp
counter=0
ppid=0
eexe=""
ppath=""
while read line
do 
	#echo $line
	for item in $line;
	do
		if [ $counter -eq 0 ]; then
			ppid=$item
		elif [ $counter -eq 1 ]; then
			eexe=$item
			#echo "pid= "$ppid
			#echo "exe= "$eexe
			#echo "path= "$ppath
			if [ $eexe == "/home/hcilab/catkin_ws/devel/lib/jaco_demo/force_publisher" ]; then
				kill $ppid
			fi
			counter=0
			continue
		fi
		counter=`expr $counter + 1`
	done
done <ps.temp

rm ps.temp

#ps aux |grep python | awk '{print $2 ";" $11}' >> ps.temp
ps aux |grep python | awk '{print $2 ";" $11 ";" $12}' >> ps.temp
counter2=0
ppid=0
eexe=""
ppath=""
while read line
do 
	echo "new line------------------------------------------"
	#echo $line
	for item in $line;
	do
		#echo "item= "$item
		#echo "counter= "$counter
		if [ $counter2 -eq 0 ]; then
			ppid=$item
		elif [ $counter2 -eq 1 ]; then
			eexe=$item
		elif [ $counter2 -eq 2 ]; then
			ppath=$item
			echo "pid= "$ppid
			echo "exe= "$eexe
			echo "path= "$ppath
			#if [ $eexe == "/home/hcilab/catkin_ws/src/jaco-ros/jaco_demo/nodes/jaco_demo/k2.py" ] || [ $eexe == "/home/hcilab/catkin_ws/src/jaco-ros/jaco_demo/nodes/jaco_demo/knn.py" ]; then
			#	kill -9 $ppid
			#fi
			counter2=0
			continue
		fi
		counter2=`expr $counter2 + 1`
	done
done <ps.temp

rm ps.temp
