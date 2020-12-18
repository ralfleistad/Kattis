#!/bin/python3

n = int(input())
d = {}

for i in range(n):
    line = input().split(' ')
    action = line[0]
    name = line[1]

    if name not in d:
        d[name] = -1

    
    if action == "entry" and d[name] == -1:
        print(name, "entered")
        d[name] = 1
    elif action == "entry" and d[name] == 1:
        print(name, "entered (ANOMALY)")
    elif action == "exit" and d[name] == 1:
        print(name, "exited")
        d[name] = -1
    elif action == "exit" and d[name] == -1:
        print(name, "exited (ANOMALY)")

    

