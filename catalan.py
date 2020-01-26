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


def cat(n):
    catalan = math.factorial(2 * n) // (math.factorial(n + 1) * math.factorial(n))
    return catalan
    

cases = int(input())
for c in range(cases):
    a = int(input())
    print(cat(a))
        
    


