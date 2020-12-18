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
    num, den = list(map(int, input().split()))
    
    if num == 0 and den == 0: break
        
    print(int(num / den), num % den, "/", den)


        
        