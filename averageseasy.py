from collections import defaultdict
from operator import itemgetter
import sys
import math

### Read list of numbers into a list and convert to integers
# nums = list(map(int, input().split(' ')))

### Sort dictionary by key
# for i in sorted(key_value.keys()):

cases = int(input())
for x in range(cases):
    blank = input()
    
    studs = list(map(int, input().split(' ')))
    cs = studs[0]
    ec = studs[1]
    
    ec_stud = []
    cs_stud = []
    
    temp = list(map(int, input().split(' ')))
    for n in temp:
        cs_stud.append(n)
        
    temp = list(map(int, input().split(' ')))
    for n in temp:
        ec_stud.append(n)
        
    #print(cs_stud)
    #print(ec_stud)
    
    cs_avg = sum(cs_stud) / len(cs_stud)
    ec_avg = sum(ec_stud) / len(ec_stud)
    
    ans = 0
    for s in cs_stud:
        if s > ec_avg and s < cs_avg:
            ans += 1
           
    print(ans)
    
    

