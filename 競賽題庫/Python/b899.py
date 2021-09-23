# Use complex to simplify code and calculations.

# Calculate the distance between two points.
def Distance(a, b):
    return abs(a - b);

def GetPosition(pos):
    print(int(pos.real), int(pos.imag))

Pos1 = complex(*map(int, input().split()))
Pos2 = complex(*map(int, input().split()))
Pos3 = complex(*map(int, input().split()))

if Distance(Pos2, Pos3) < Distance(Pos1, Pos2) > Distance(Pos1, Pos3):
    result = Pos1 + Pos2 - Pos3
    GetPosition(result)
elif Distance(Pos2, Pos3) < Distance(Pos1, Pos3) > Distance(Pos1, Pos2):
    result = Pos1 + Pos3 - Pos2
    GetPosition(result)
else:
    result = Pos2 + Pos3 - Pos1
    GetPosition(result)