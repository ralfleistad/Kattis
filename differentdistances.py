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

while True:
    nums = list(map(float, input().split()))
    if nums[0] == 0: break
        
    x1 = nums[0]
    y1 = nums[1]
    x2 = nums[2]
    y2 = nums[3]
    p = nums[4]
    
    x = pow(abs(x1 - x2), p)
    y = pow(abs(y1 - y2), p)
    p = 1 / p
    print("%.10f" % pow(x + y, p))
    

        
    

        


