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


n, p, q = list(map(int, input().split()))
score = int((p + q) / n)
res = score % 2
if res != 0:
    print("opponent")
else:
    print("paul")
        

        


