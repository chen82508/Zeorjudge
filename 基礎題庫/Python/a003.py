# There are some problem with ASCII encoding
import sys

for sInput in sys.stdin:
    M, D = sInput.split()
    S = int( M * 2 + D ) % 3

    if S == 0:
        print("?��???")
    elif S == 1:
        print("???")
    else:
        print("大�??")