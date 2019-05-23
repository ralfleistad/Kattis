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


cases = int(input())
for c in range(cases):
    fox = input().split(' ')
    
    animal = [""]
    while animal[0] != "what":
        animal = input().split(' ')
        for i in range(1, len(animal)):
            fox = list(filter(lambda a: a != animal[i], fox))

    for sound in fox:
        print(sound, end = " ")

