from sys import stdin

for m in stdin:
    times = int(m)

    for i in range(times):
        for n in stdin:
            digit = 1
            s = 0
            current = 0

            for j in range(int(n)):
                digit *= 10
                current = digit // 17
                s += current
                digit %= 17
            
            print(current, s, sep=" ")