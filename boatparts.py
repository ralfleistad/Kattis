from collections import defaultdict
from operator import itemgetter
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


parts, days = list(map(int, input().split()))
deck = {}
res = -1
for i in range(days):
    part = input()
    
    if part not in deck:
        deck[part] = 1
    else:
        deck[part] += 1
        
    if len(deck) == parts:
        res = i + 1
        break

if res != -1:
    print(res)
else:
    print("paradox avoided")


