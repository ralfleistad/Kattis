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


papers = int(input())
citations = []
for _ in range(papers):
    citations.append(int(input()))
    
citations.sort()
ans = 0
for i in range(len(citations)):
    if citations[i] >= papers - i:
        ans = papers - i
        break
        
print(ans)



