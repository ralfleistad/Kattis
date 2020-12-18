import sys
import math

### Read list of numbers into a list and convert to integers
# nums = list(map(int, input().split(' ')))

### Sort dictionary by key
# for i in sorted(key_value.keys()):

while True:
    try:
        day = input().split(' ')
        date = day[0] + " " + day[1] + " " + day[2]
        first = list(map(int, day[3].split(':')))
        second = list(map(int, day[4].split(':')))
        
        hour1 = first[0]
        minute1 = first[1]
        
        hour2 = second[0]
        minute2 = second[1]
        
        h = hour2 - hour1
        m = minute2 - minute1
        if m < 0:
            h -= 1
            m = 60 - abs(m)
        
        print(date, h, "hours", m, "minutes")
    
    
    except EOFError:
        break