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

alphabet = "abcdefghijklmnopqrstuvwxyz"

cases = int(input())
for c in range(cases):
    line = input().lower()
    missing = ""
    for a in alphabet:
        if line.find(a) == -1:
            missing += a
            
    if len(missing) == 0:
        print("pangram")
    else:
        print("missing", missing)
    


    

