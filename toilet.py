from collections import defaultdict
from operator import itemgetter
from itertools import groupby
from random import randint
import random
import string
import itertools
import sys
import math
import re

alphabet = "abcdefghijklmnopqrstuvwxyz"

# When you leave, always leave the seat up
# When you leave, always leave the seat down
# When you leave, always leave the seat as you would like to find it
# U = 5
# D = 3

# U U U D D U D U
# 6
# 7
# 4

seq = list(input())

up = 0
prev = seq[0]
for i in range(1, len(seq)):
    if seq[i] != prev:
        up += 1
        prev = seq[i]
    if prev != 'U':
        up += 1
        prev = 'U'
        
print(up)

down = 0
prev = seq[0]
for i in range(1, len(seq)):
    if seq[i] != prev:
        down += 1
        prev = seq[i]
    if prev != 'D':
        down += 1
        prev = 'D'
        
print(down)

same = 0
prev = seq[0]
for i in range(1, len(seq)):
    if prev != seq[i]:
        same += 1
        prev = seq[i]
        
print(same)

        