from collections import defaultdict
from operator import itemgetter
import sys
import math

### Creates a list containing 5 lists, each of 8 items, all set to 0
# matrix = [[0 for x in range(w)] for y in range(h)]

### Read list of numbers into a list and convert to integers
# nums = list(map(int, input().split(' ')))

### Sort dictionary by key
# for i in sorted(key_value.keys()):

cases = int(input())
for c in range(cases):
    votes = int(input())
    
    cand = []
    for vote in range(votes):
        cand.append(int(input()))

    cpy = cand.copy()
    cpy.sort(reverse = True)
    
    if len(cand) > 1:
        if cpy[0] == cpy[1]:
            print("no winner")
        else:
            winner = cand.index(cpy[0]) + 1
            cand.pop(cand.index(cpy[0]))
            if cpy[0] > sum(cand):
                print("majority winner", winner)
            else:
                print("minority winner", winner)
    else:
        print("majority winner 1")
        