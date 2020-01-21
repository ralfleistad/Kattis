import math
import os
import random
import re
import sys

n = input()
nums = list(map(int, input().split()))

total = 0
positive = 0
for x in nums:
    if x != -1:
        positive += 1
        total += x

print(total / positive)