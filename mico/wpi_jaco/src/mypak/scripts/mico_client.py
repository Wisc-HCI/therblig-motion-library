#!/usr/bin/env python

###
# A test file for a python client
# client sends a single message to the server.


import socket
import struct


#reate an INET, STREAMing socket
s = socket.socket(
    socket.AF_INET, socket.SOCK_STREAM)
#now connect to the web server on port 80
# - the normal http port
#ip = socket.gethostname()
ip = '192.168.1.127'
s.connect((ip, 9999))
msg = struct.pack("iii", 0x4a206948, 0x206e686f, 0x00293b20)
s.send(msg)
