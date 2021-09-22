from sys import stdin

def gp(n, k):
    c = 0
    while n % k == 0:
        c += 1
        n //= k

    return n, c

def format_result(f, p):
    if p == 1:
        return str(f)
    return "{}^{}".format(f, p)
    

for sInput in stdin:
    n = int(sInput)
    limit = int(n ** 0.5) + 1
    result = []

    n, c = gp(n, 2)
    if c:
        result.append(format_result(2, c))
    
    for i in range(3, limit, 2):
        if i > n:
            break

        n, c = gp(n, i)
        if c:
            result.append(format_result(i, c))
    
    if n > 1:
        result.append(format_result(n, 1))
    
    print(" * ".join(result))