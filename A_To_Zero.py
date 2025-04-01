testcases = int(input())
for _ in range(testcases):
    n,k = map(int, input().split())
    if n%2 == 0:
        print((n+k-2)//(k-1))
    else:
        print(1+ (n-2)//(k-1))