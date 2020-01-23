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

m, a, b, c = list(map(int, input().split()))

items = {}
for i in range(m):
    items[i] = 0
    
tot = a + b + c
ans = True
for i in range(tot):
    idx = i % m
    items[idx] += 1
    
    if items[idx] >= 3:
        ans = False

        
if ans:
    print("possible")
else:
    print("impossible")

