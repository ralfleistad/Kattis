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

cases = int(input())
for c in range(cases):
    n = int(input())
    
    correct = -1
    for i in opr:
        for j in opr:
            for k in opr:
                curr = '4' + i + '4' + j + '4' + k + '4'
                correct = eval(curr)
                if correct == n:
                    print("4 %s 4 %s 4 %s 4 = %d" % (i[0], j[0], k[0], correct))
                    break
            if correct == n:
                break
        if correct == n:
            break

    if correct != n:
        print("no solution")

