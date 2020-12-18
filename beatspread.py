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


cases = int(input())
for c in range(cases):
    score, diff = list(map(int, input().split()))
    
    if diff > score:
        print("impossible")
    else:
        s = 0
        a = score
        b = 0
        while s != score or abs(a - b) != diff and a >= 0 and b <= score:
            a -= 1
            b += 1
            s = a + b
         
        if s == score and abs(a - b) == diff:
            print(a, b)
        else:
            print("impossible")
        
        

