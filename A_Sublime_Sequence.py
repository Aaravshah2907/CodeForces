t = int(input())
for _ in range(t):
    x, n = map(int, input().split())
    result = x if n % 2 == 1 else 0
    print(result)
