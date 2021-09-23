def CaesarCipher(Msg):
    result = ''

    for cha in Msg:
        num = ord(str(cha))
        dec_num = (num - ord('A') + 3) % 26 + ord('A')
        result += chr(dec_num)

    return result

TestCases = int(input())
for i in range(TestCases):
    Msg = input()
    print(CaesarCipher(Msg))