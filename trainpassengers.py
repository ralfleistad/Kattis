from collections import defaultdict
from operator import itemgetter
import sys
import math

### Read list of numbers into a list and convert to integers
# nums = list(map(int, input().split(' ')))

### Sort dictionary by key
# for i in sorted(key_value.keys()):


inp = list(map(int, input().split(' ')))
capacity = inp[0]
stations = inp[1]

passangers = 0
left = 0
enter = 0
wait = 0
valid = True
for x in range(stations):
    inp = list(map(int, input().split(' ')))
    
    left = inp[0]
    passangers -= left
    if passangers < 0:
        valid = False
        break
    
    enter = inp[1]
    passangers += enter
    if passangers > capacity:
        valid = False
        break
    
    wait = inp[2]
    if passangers < capacity and wait > 0:
        valid = False
        break
    

if valid == True and wait == 0 and passangers == 0:
    print("possible")
else:
    print("impossible")
    
    

