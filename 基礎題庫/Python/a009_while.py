while True:
    try:
        sInput = input()
        ans = ""
        for i in range(len(sInput)):
            ans += chr(ord(sInput[i]) - 7)
        
        print(ans)
    except:
        break;