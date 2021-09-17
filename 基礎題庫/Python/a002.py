import sys

for sInput in sys.stdin:
    i1, i2 = sInput.split()
    i1, i2 = int(i1), int(i2)
    print(i1 + i2)