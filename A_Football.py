zeroCount, oneCount,status =0,0,0
s = input()
for i in range(len(s)):
    if s[i] == '1':
        zeroCount = 0
        oneCount += 1
        if oneCount == 7:
            print("YES")
            status += 1
            break
    else:
        zeroCount += 1
        oneCount = 0
        if zeroCount == 7:
            print("YES")
            status += 1
            break
if not status:
    print("NO")