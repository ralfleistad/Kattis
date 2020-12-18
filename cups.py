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

# COLOR - INT = RADIUS
# INT - COLOR = DIAMETER

ans = {}
cups = int(input())
for i in range(cups):
    line = input().split()
    num = 0
    if line[0].isdigit():
        num = int(int(line[0]) / 2)
        ans[line[1]] = num
    else:
        num = int(line[1])
        ans[line[0]] = num
        
result = sorted(ans.items(), key = lambda kv: kv[1])
for c in result:
    print(c[0])
    



