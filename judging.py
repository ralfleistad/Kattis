import sys
import math

dom = {}
kat = {}
judge = set()
n = int(input())
for i in range(n * 2):
    line = input()
    
    if line not in judge:
        judge.add(line)
        dom[line] = 0
        kat[line] = 0
    
    if i < n:
        dom[line] += 1
    else:
        kat[line] += 1

        
ans = 0
for i in judge:
    ans += min(dom[i], kat[i])
    
print(ans)

        

