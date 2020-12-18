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


n, cap, diff = list(map(int, input().split()))
socks = sorted(list(map(int, input().split())))


machines = 1
lowest = socks[0]
inmachine = 1
for i in range(1, len(socks)):
    if inmachine == cap:
        machines += 1
        lowest = socks[i]
        inmachine = 0
        
    if socks[i] - lowest > diff:
        machines += 1
        lowest = socks[i]
        inmachine = 0
        
    inmachine += 1
        
print(machines)
    


