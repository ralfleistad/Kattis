from collections import defaultdict
from operator import itemgetter
from itertools import groupby
from random import randint
import collections
import random
import string
import itertools
import sys
import math
import re

alphabet = "abcdefghijklmnopqrstuvwxyz"

first = str(input())
second = str(input())

if len(first) > len(second):
    second = second.zfill(len(first))
elif len(first) < len(second):
    first = first.zfill(len(second))
    

f = ""
s = ""
for i in range(len(first)):
    if first[i] == second[i]:
        f += first[i]
        s += second[i]
    elif first[i] > second[i]:
        f += first[i]
    else:
        s += second[i]

yoda = False
if len(f) == 0:
    f = "YODA"
    yoda = True
elif len(s) == 0:
    s = "YODA"
    yoda = True
    
if yoda:
    print(f)
    print(s)
else:
    print(int(f))
    print(int(s))
        


    



