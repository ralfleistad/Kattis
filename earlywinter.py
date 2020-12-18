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


n, now = list(map(int, input().split()))
years = list(map(int, input().split()))

ans = -1
for y in range(len(years)):
    if years[y] <= now:
        ans = y
        break

if ans != -1:
    print("It hadn't snowed this early in", ans, "years!")
else:
    print("It had never snowed this early!")
    


