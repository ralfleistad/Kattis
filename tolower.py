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

count = 0
problems, tests = list(map(int, input().split()))

for i in range(problems):
    lower = True
    for j in range(tests):
        test = input()
        for ch in range(1, len(test)):
            if test[ch].isupper():
                lower = False
            
    if lower:
        count += 1


print(count)


