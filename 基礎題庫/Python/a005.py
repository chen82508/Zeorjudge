import sys

for row in sys.stdin:
    row = int(row)
    for i in range(row):
        arr = map(int, input().split())
        arr = [int(i) for i in arr]

        if (arr[3] - arr[2] == arr[2] - arr[1]):
            arr.append((arr[3] + (arr[3] - arr[2])))
        elif (arr[3] / arr[2] == arr[2] / arr[1]):
            arr.append((arr[3] * (arr[3] // arr[2])))
        
        print(arr[0], arr[1], arr[2], arr[3], arr[4])