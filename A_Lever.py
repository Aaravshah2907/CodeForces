cases = int(input())
for _ in range(cases):
    N = int(input())
    arr1 = list(map(int, input().split()))
    aar2 = list(map(int, input().split()))
    count = 1
    for n in range(N):
        if arr1[n] > aar2[n]:
            count += (arr1[n] - aar2[n])
    print(count)