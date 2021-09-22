import sys
import codecs

# There are some problem with ASCII encoding
sys.stdout = codecs.getwriter("utf-8")(sys.stdout.detach())

M, D = input().split()
S = int( M * 2 + D ) % 3

if S == 0:
    print("普通")
elif S == 1:
    print("吉")
else:
    print("大吉")