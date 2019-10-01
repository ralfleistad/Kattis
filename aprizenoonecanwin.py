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


n, x = map(int, input().split())
items = list(map(int, input().split()))
items.sort(reverse = True)

i = 0
j = len(items) - 1
while i < j:
    front = items[i]
    back = items[j]
    
    if front + back <= x:
        j -= 1
    else:
        i += 1
    
print(len(items) - j)
    


