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


d, m = list(map(int, input().split()))
date = datetime.datetime(2009, m, d)
print(date.strftime("%A"))


