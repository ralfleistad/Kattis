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


cases = int(input())
for c in range(cases):
    stops = int(input())
    p = 0.5
    for i in range(stops):
        p += p + 0.5

    print(int(p))


