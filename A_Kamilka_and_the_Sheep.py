import math

def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def solve():
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    max_pleasure = 0
    for i in range(n):
        for j in range(i + 1, n):
            diff = a[j] - a[i]
            max_pleasure = max(max_pleasure, diff)
    print(max_pleasure)

t = int(input())
for _ in range(t):
    solve()