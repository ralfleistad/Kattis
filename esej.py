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


# 1. it contains at least A, and at most B words;
# 2. every word contains at least one, and at most 15 letters;
# 3. the used vocabulary is large enough, in other words, the essay contains at least B/2 different words.


a, b = list(map(int, input().split()))

alpha = 'abcdefghijklmnopqrstuvwxyz'
used = 0
diff = max(a, b // 2 + 1)

for a in alpha:
    for b in alpha:
        for c in alpha:
            for d in alpha:
                print(a + b + c + d, end = " ")
                used += 1
                if used >= diff:
                    print()
                    sys.exit(0)



