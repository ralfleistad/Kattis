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


n = int(input())

# STARTS WITH ONLY 'A'
# A -> B
# B -> BA

a = 1
b = 0
for i in range(n):
    temp_a = a
    a = b
    b += temp_a

print(a, b)





