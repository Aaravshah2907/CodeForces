testcases = int(input())
for _ in range(testcases):
    n, k = map(int, input().split())
    num = k + (k-1)//(n-1)
    print(num)