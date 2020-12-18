import sys

suits = { 'P': 13,
          'K': 13,
          'H': 13,
          'T': 13,
        }
used = set()

line = input()
cards = [(line[i:i+3]) for i in range(0, len(line), 3)]

for card in cards:
    if card in used:
        print("GRESKA")
        sys.exit(0)
    else:
        used.add(card)
        suits[card[0]] -= 1
        
print(suits['P'], suits['K'], suits['H'], suits['T'])

