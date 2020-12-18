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
    v1 = list(map(int, input().split()))
    v2 = list(map(int, input().split()))
    v1.sort()
    v2.sort(reverse = True)

    ans = 0
    for i in range(n):
        ans += v1[i] * v2[i]
    
    print("Case #%d: %d" % (c+1, ans))


