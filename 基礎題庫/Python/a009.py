import sys

for sInput in sys.stdin:
    try:
        ans = ""
        for i in range(len(sInput)):
            ans += chr(ord(sInput[i]) - 7)
        
        print(ans)
    except:
        break;