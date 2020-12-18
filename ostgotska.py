from collections import defaultdict
from operator import itemgetter
from random import randint
import random
import string
import itertools
import sys
import math
import re

### Creates a list containing 5 lists, each of 8 items, all set to 0
# matrix = [[0 for x in range(w)] for y in range(h)]

### Read list of numbers into a list and convert to integers
# nums = list(map(int, input().split(' ')))

### Sort dictionary by key
# for i in sorted(key_value.keys()):


sent = input().split()
count = 0
for w in sent:
    if w.find('ae') != -1:
        count += 1
    
forty = (len(sent) / 100) * 40
if count >= forty:
    print("dae ae ju traeligt va")
else:
    print("haer talar vi rikssvenska")


    

