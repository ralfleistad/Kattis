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

day = 1
while True:
    try:
        line = line = input().split(' ')
        record = {}
        backup = {}
        line = line = input().split(' ')
        print("Day ", day)
        day += 1
        while line[0] != "CLOSE":
            name = line[1]
            time = int(line[2])
                
            if line[0] == "ENTER":
                if name not in record:
                    backup[name] = time
                    record[name] = 0
                else:
                    backup[name] += time
            else:
                record[name] += abs(backup[name] - time)
                backup[name] = 0
                
            line = line = input().split(' ')
          
        for n in sorted(record.keys()):
            print("%s $%.2f" % (n, record[n] * 0.1))

        print()

    except EOFError:
        break