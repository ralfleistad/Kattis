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

factorials = {0: 1}
for i in range(1, 101):
    factorials[i] = i * factorials[i - 1]

while True:
    try:
        line = str(input().split()[0])

        count = {}
        for ch in line:
            if ch in count:
                count[ch] += 1
            else:
                count[ch] = 1
                
        fact = math.factorial(len(line))
        div = factorials[len(line)]
        for x in count:
            if count[x] != 1:
                div = div // factorials[count[x]]
        
        print(div)

    except EOFError:
        break

