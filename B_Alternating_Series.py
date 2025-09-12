cases = int(input())
for _ in range(cases):
    N = int(input())
    arr = [0]*N
    if N%2 == 0:
        arr[-1] = 2
        sum = 0
    else:
        arr[-1] = -1
        sum = -1
    for i in range(0,N-1,2):
        arr[i] = -1
        sum -= 1
    sum = -1*sum + 1
    for i in range(1,N-1,2):
        arr[i] = sum
    print(*arr)