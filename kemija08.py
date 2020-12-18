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


vowels = ['a', 'e', 'i', 'o', 'u']
line = list(input())

i = 0
while i < len(line):
    print(line[i], end = "")
    
    if line[i] in vowels:
        i += 3
    else:
        i += 1




