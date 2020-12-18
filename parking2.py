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
    stores = sorted(list(map(int, input().split())))
    
    ans = -(stores[0] - stores[len(stores) - 1]) * 2
        
    print(ans)

