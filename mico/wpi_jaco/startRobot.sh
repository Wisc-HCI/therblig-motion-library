tmux new-session -s robot -n rviz -d './runRviz.sh;bash -i'
sleep 15
tmux new-window -t robot:5 -n rosbridge 'source devel/setup.sh;roslaunch rosbridge_server rosbridge_websocket.launch;bash-i'
tmux new-window -t robot:1 -n testGraph 'cd src/mypak/scripts;./testGraph.sh;bash -i'
tmux new-window -t robot:2 -n printPose 'cd src/mypak/scripts;./printPose.sh;bash -i'
tmux new-window -t robot:3 -n server 'cd ~/marshall/3D-Task-Demo/src;./startServer.sh;bash -i'
tmux new-window -t robot:4 -n ngrok 'ngrok http 5000;bash -i'

tmux select-window -t robot:0
tmux -2 attach-session -t robot

