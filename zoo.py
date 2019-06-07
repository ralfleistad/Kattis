import sys

case = 1

while True:
    n = int(input())
    
    if n == 0:
        break
    
    animals = {}
    for i in range(n):
        line = input().split(' ')
        animal = line[-1].lower()
        
        if animal not in animals:
            animals[animal] = 1
        else:
            animals[animal] += 1
        
    print("List " + str(case) + ":")
    for entry in sorted (animals.keys()):
        print(entry, "|", animals[entry])
    case += 1
        

