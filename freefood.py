from collections import defaultdict
from datetime import datetime
from operator import itemgetter
from itertools import groupby
from random import randint
import collections
import operator
import random
import string
import itertools
import sys
import math
import re

alphabet = "abcdefghijklmnopqrstuvwxyz"
opr = ['*', '//', '+', '-']


n = int(input())
days = []
for c in range(n):
    a, b = list(map(int, input().split()))
    for i in range(a, b + 1):
        if i not in days:
            days.append(i)

print(len(days))

