t = int(input())
for _ in range(t):
    n = int(input())
    p = list(map(int, input().split()))
    q = [n - x + 1 for x in p]
    print(' '.join(map(str, q)))
