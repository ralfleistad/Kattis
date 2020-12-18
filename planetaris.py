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


systems, ships = list(map(int, input().split()))
finni = sorted(list(map(int, input().split())))

win = 0
left = ships
for b in finni:
    if left > b:
        left -= b + 1
        win += 1
    else:
        break
        
print(win)



