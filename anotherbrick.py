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


h, w, n = list(map(int, input().split()))
bricks = list(map(int, input().split()))

width = w
built = 0
for b in bricks:
    if built > h:
        break
    elif width - b > 0:
        width -= b
    elif width - b == 0:
        width = w
        built += 1
    else:
        built = -1
        break
    
print("YES" if built >= h else "NO" )


