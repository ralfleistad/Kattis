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
for _ in range(cases):
    
    cust = int(input())
    wood = []
    
    for i in range(cust):
        pieces = list(map(int, input().split()))
        pieces = pieces[1:]
        
        temp = 0
        for p in pieces:
            temp += p
            
        wood.append(temp)
            
    wood.sort()
    tot = 0
    ans = 0
    for w in wood:
        tot += w
        ans += tot
        
    print("%.10f" % (ans/len(wood)))
            
            