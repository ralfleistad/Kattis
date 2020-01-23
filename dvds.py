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
for c in range(cases):
    n = int(input())
    dvd = list(map(int, input().split()))
    
    order = 0
    for i in dvd:
        if order + 1 == i:
            order += 1

    print(n - order)

