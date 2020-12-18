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


pos = list(map(int, input().split()))

ans = 0
for i in range(len(pos) - 1):
    if abs(pos[i] - pos[i + 1]) > ans:
        ans = abs(pos[i] - pos[i + 1])


print(ans - 1)

