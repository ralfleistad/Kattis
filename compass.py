from collections import defaultdict
from datetime import datetime
from operator import itemgetter
from itertools import groupby
from random import randint
import collections
import operator
import random
import string
import itertools
import sys
import math
import re

alphabet = "abcdefghijklmnopqrstuvwxyz"
opr = ['*', '//', '+', '-']


curr = int(input())
goal = int(input())
clockwise = 0
counter_c = 0
same = False

if(curr == goal):
    print("0")
    same = True
elif(curr < goal):
    clockwise = goal - curr
    counter_c = curr + (360 - goal)
else:
    clockwise = goal + (360 - curr)
    counter_c = curr - goal

if clockwise == counter_c and not same:
    print(clockwise)
elif clockwise < counter_c:
    print(clockwise)
elif clockwise > counter_c:
    print(-counter_c)

