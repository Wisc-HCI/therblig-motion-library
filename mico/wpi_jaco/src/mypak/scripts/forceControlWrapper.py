#!/usr/bin/env python

from ctypes import cdll
lib = cdll.LoadLibrary('./libfc.so')


class ForceControl(object):
    def __init__(self):
        self.obj = lib.ForceControl_new()

    def startForceControl(self):
        lib.ForceControl_StartForceControl(self.obj)

    def stopForceControl(self):
        lib.ForceControl_StopForceControl(self.obj)