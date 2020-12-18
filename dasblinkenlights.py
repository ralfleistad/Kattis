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


p, q, s = map(int, input().split())

first = set()
second = set()

count = p
while count <= s:
    first.add(count)
    count += p
    
count = q
while count <= s:
    second.add(count)
    count += q
    
ans = (first & second)

if len(ans) > 0:
    print("yes")
else:
    print("no")



