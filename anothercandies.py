from collections import defaultdict
from operator import itemgetter
import sys
import math
import re

### Creates a list containing 5 lists, each of 8 items, all set to 0
# matrix = [[0 for x in range(w)] for y in range(h)]

### Read list of numbers into a list and convert to integers
# nums = list(map(int, input().split(' ')))

### Sort dictionary by key
# for i in sorted(key_value.keys()):


cases = int(input())
for x in range(cases):
    blank = input()
    
    total = 0
    children = int(input())
    for i in range(children):
        candy = int(input())
        total += candy
        
        
    if total % children == 0:
        print("YES")
    else:
        print("NO")
        

