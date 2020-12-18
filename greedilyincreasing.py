import sys
import math

# Read list of numbers into a list and convert to integers
# nums = list(map(int, input().split(' ')))

int(input())
nums = list(map(int, input().split(' ')))
ans = []

curr = nums[0]
ans.append(curr)
idx = 1
while idx < len(nums):
    if nums[idx] > curr:
        curr = nums[idx]
        ans.append(curr)
    idx += 1

print(len(ans))
for n in ans:
    print(n, end = " ")
        

