#!/usr/bin/env python

from ctypes import cdll
import os
temp = os.path.abspath(__file__)
temp = os.path.realpath(temp)
temp = os.path.dirname(temp)
temp = os.path.join(temp, "libfc.so")
lib = cdll.LoadLibrary(temp)


class ForceControl(object):
    def __init__(self):
        self.obj = lib.ForceControl_new()

    def startForceControl(self):
        lib.ForceControl_StartForceControl(self.obj)

    def stopForceControl(self):
        lib.ForceControl_StopForceControl(self.obj)