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
    trash = input()
    n = int(input())
    badass = 0
    rank = []
    for i in range(n):
        team = list(input().split(' '))
        rank.append(int(team[1]))
        #pref = int(team[1])
        #badass += abs((i + 1) - pref)
        
    
    rank.sort()
    for i in range(len(rank)):
        badass += abs((i + 1) - rank[i])
            
    print(badass)


        
        