import sys
import math

### Read list of numbers into a list and convert to integers
# nums = list(map(int, input().split(' ')))

### Sort dictionary by key
# for i in sorted (key_value.keys()) : 

while True:
    n = int(input())
    if n == 0:
        break
    
    repo = {}
    for i in range(n):
        line = input().split(' ')
        name = ''.join(line[:1])
        
        for word in line[1:]:
            if word not in repo:
                repo[word] = []
        
            repo[word].append(name)
    
    for dish in sorted(repo.keys()):
        print(dish, end = " ")
        for person in sorted(repo[dish]):
            print(person, end = " ")
        print()
    print()

