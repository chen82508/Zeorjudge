import sys

for sInput in sys.stdin:
    a, b, c = map(int, sInput.split())
    jdg = b ** 2 - 4 * a * c

    if jdg < 0:
        print("No real root");
    elif jdg == 0:
        ans = int((-b + jdg ** 0.5) / (2 * a))
        print("Two same roots x=" + str(ans))
    else:
        ans1 = int((-b + jdg ** 0.5) / (2 * a))
        ans2 = int((-b - jdg ** 0.5) / (2 * a))
        print("Two different roots x1=" + str(ans1) + " , x2=" + str(ans2))