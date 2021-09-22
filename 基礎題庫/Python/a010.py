import sys

for sInput in sys.stdin:
    x = int(sInput)
    p = False
    limit = int(x ** 0.5) + 1
    result = []

    for i in range(2, limit, 1):
        power = 0
        while x % i == 0:
            power += 1
            x //= i
        
        if power:
            if power > 1:
                result.append(str(i) + "^" + str(power))
            else:
                result.append(str(i))
    
    if x != 1:
        result.append(str(x))
    
    print(" * ".join(result))