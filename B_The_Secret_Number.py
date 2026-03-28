testcases = int(input())
for _ in range(testcases):
    n = int(input())
    k = 11
    arr = []
    while n >= k:
        if n % k == 0:
            arr.append(n//k)
        k = (k-1)*10 + 1
    print(len(arr))
    arr.reverse()
    if arr:
        print(*arr)