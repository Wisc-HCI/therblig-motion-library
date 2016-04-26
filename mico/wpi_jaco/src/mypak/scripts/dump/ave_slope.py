#!/usr/bin/env python

from math import ceil

f = open("final_gripper_timing.txt", "r")

x1 = 0
y1 = 0
x2 = 0
y2 = 0

ave = 0
count = 0
total = 0
tcount = 0

f.readline()
f.readline()
line = f.readline()

vals = line.split("\t: ")
vals[1] = vals[1][:-2]

x1 = int(vals[0])
y1= float(vals[1])

print("Shortest time : " + str(y1))

line = f.readline()

save = []

while(len(line) > 4):

    vals = line.split("\t: ")

    vals[1] = vals[1][:-2]

    x2 = int(vals[0])
    y2 = float(vals[1])

    save.append(y2)

    slope = (y2-y1) / (x2-x1)

    #print(str(count) +  " > " + str(slope)) 

    x1 = x2
    y1 = y2

    ave = ave + slope
    total = total + slope
    count = count + 1
    tcount = tcount + 1
  
    if(count == 10):
        ave = ave/count
        print("Weighted Slope : " + str(tcount) + " > " + str(ave))
        ave = 0
        count = 0

    line = f.readline()

print("\n")
total = total/tcount
print("Average Slope : " + str(total) + "\n")

est = total*1000
est = ceil(est)/1000

print("Suggested Timing Estimates for planning :")
print("\t D = distance between final and initial finger position")
print("\t S = approximate minimum time = ~0.3")
print("\t Estimated time = ~(" + str(est) + " * D) + 0.25 seconds\n")

f.close()

count = 0
ave = 0

while(count < len(save)):

    estimate = est*count + 0.25

    y = float(save[count])
    
    dif = estimate - y

    dif = abs(dif)
    #print("Difference from tested value = " + str(dif))

    ave = ave + dif

    count = count + 1 



ave = ave/count
print("Average difference in estimated value to tested value : " + str(ave) + " seconds \n")


