testcases = int(input())
for i in range(testcases):
    n = input()
    n = list(n)
    n = n[::-1]
    l = len(n)
    ans = []
    for j in range(l):
        if n[j] != '0':
            ans.append(n[j] + '0' * j)
    print(len(ans))
    print(*ans)