TestCases = int(input())

for i in range(TestCases):
    a1, b1, c1, a2, b2, c2 = map(int, input().split())

    D = a1 * b2 - a2 * b1
    Dx = c1 * b2 - c2 * b1
    Dy = a1 * c2 - a2 * c1

    print(Dx // D, Dy // D)