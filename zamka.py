from collections import defaultdict
from operator import itemgetter
import sys
import math

### Read list of numbers into a list and convert to integers
# nums = list(map(int, input().split(' ')))

### Sort dictionary by key
# for i in sorted(key_value.keys()):


def sumOfDigits(x):
    temp = 0
    while x > 0:
        temp += x % 10
        x = math.trunc(x / 10)
        
    return math.trunc(temp)


#determine the minimal integer N such that L≤N≤D and the sum of its digits is X
#determine the maximal integer M such that L≤M≤D and the sum of its digits is X

l = int(input())
d = int(input())
x = int(input())

n = l
while n >= l and n <= d and sumOfDigits(n) != x:
    n += 1
    
m = d
while m >= l and m <= d and sumOfDigits(m) != x:
    m -= 1
    
print(n)
print(m)

