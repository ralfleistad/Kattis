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


cases = int(input())
for _ in range(cases):
    attr = int(input())
    disg = defaultdict(list)
    for a in range(attr):
        line = input().split(' ')
        name = line[0]
        cate = line[1]
        disg[cate].append(name)
        
    tot = 1
    for i in disg:
        tot *= len(disg[i]) + 1
        
    print(tot - 1)

