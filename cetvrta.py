from collections import defaultdict
from operator import itemgetter
from itertools import groupby
from random import randint
import datetime
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


ax, ay = list(map(int, input().split()))
bx, by = list(map(int, input().split()))
cx, cy = list(map(int, input().split()))

if ax == bx:
    dx = cx
elif ax == cx:
    dx = bx
else:
    dx = ax

if ay == by:
    dy = cy
elif ay == cy:
    dy = by
else:
    dy = ay

print(dx, dy)


