from collections import defaultdict
from datetime import datetime
from operator import itemgetter
from itertools import groupby
from random import randint
import collections
import random
import string
import itertools
import sys
import math
import re

alphabet = "abcdefghijklmnopqrstuvwxyz"


curr = input()
expl = input()

FMT = "%H:%M:%S"
c = datetime.strptime(curr, FMT)
e = datetime.strptime(expl, FMT)
if int(c.hour) > int(e.hour):
    ans = datetime.strptime(str(e - c).split(',')[1].strip(), FMT)
else:
    ans = datetime.strptime(str(e - c), FMT)

if str(ans).split(' ')[1] == "00:00:00":
    print("24:00:00")
else:
    print(str(ans.hour).zfill(2) + ":" + str(ans.minute).zfill(2) + ":" + str(ans.second).zfill(2))


