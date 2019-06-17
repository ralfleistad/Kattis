from collections import defaultdict
from operator import itemgetter
from random import randint
import random
import string
import itertools
import sys
import math
import re

alphabet = "abcdefghijklmnopqrstuvwxyz"

### Creates a list containing 5 lists, each of 8 items, all set to 0
# matrix = [[0 for x in range(w)] for y in range(h)]

### Read list of numbers into a list and convert to integers
# nums = list(map(int, input().split(' ')))

### Sort dictionary by key
# for i in sorted(key_value.keys()):

count = 1
while True:
    line = input()
    if line == "END": break
    
    if len(line) <= 3:
        print(count, "EVEN")
    else:
        diff = 0
        valid = 1
        for i in range(1, len(line)):
            if line[i] == '*':
                diff = i
                break
        
        curr = 0
        for i in range(1, len(line)):
            if line[i] == '*':
                if i - curr != diff:
                    valid = 0
                    break
                else:
                    curr = i
                
        if valid == 1:
            print(count, "EVEN")
        else:
            print(count, "NOT EVEN")
        
            
    count += 1


