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



x, y = list(map(int, input().split()))

if y % 2 == 0:
    print("possible")
else:
    print("impossible")



