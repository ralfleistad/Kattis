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


n = int(input())
items = sorted(map(int, input().split()), reverse = True)

disc = 0
for i in range(2, len(items), 3):
    disc += items[i]

print(disc)

    

