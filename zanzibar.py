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


lines = int(input())
for c in range(lines):
    nums = list(map(int, input().split()))
    
    diff = 0
    for i in range(len(nums) - 1):
        if nums[i + 1] > nums[i] * 2:
            diff += nums[i + 1] - (nums[i] * 2)

    print(diff)

