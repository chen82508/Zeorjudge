from sys import stdin

def IsPrime(num):
    arr_jdg = [i for i in range(2, num) if i * i <= num]
    for i in range(len(arr_jdg)):
        if (num % arr_jdg[i] == 0):
            return False
    return True

for sInput in stdin:
    TestCases = int(sInput)

    for times in range(TestCases):
        num_jdg = int(input())
        result = IsPrime(num_jdg)

        if result:
            print("Y")
        else:
            print("N")