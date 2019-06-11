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


a, b, c = list(map(int, input().split()))

if a + b == c:
    print(str(a) + "+" + str(b) + "=" + str(c))
elif a - b == c:
    print(str(a) + "-" + str(b) + "=" + str(c))
elif a * b == c:
    print(str(a) + "*" + str(b) + "=" + str(c))
elif a / b == c:
    print(str(a) + "/" + str(b) + "=" + str(c))
elif a == b + c:
    print(str(a) + "=" + str(b) + "+" + str(c))
elif a == b - c:
    print(str(a) + "=" + str(b) + "-" + str(c))
elif a == b * c:
    print(str(a) + "=" + str(b) + "*" + str(c))
elif a == b / c:
    print(str(a) + "=" + str(b) + "/" + str(c))
        

        


