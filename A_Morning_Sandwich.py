testcases = int(input())
for _ in range(testcases):
    userinput = input().strip()
    b,c,h = map(int, userinput.split())
    if c+h >= b:
        print(b*2-1)
    else:
        print((c+h)*2+1)