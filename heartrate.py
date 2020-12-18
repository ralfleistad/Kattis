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


cases = int(input())
for c in range(cases):
    b, p = list(map(float, input().split()))
    
    abpm = 60 / p
    var = 60 * (b / p)
    
    print("%.4f %.4f %.4f" % (var - abpm, var, var + abpm))


