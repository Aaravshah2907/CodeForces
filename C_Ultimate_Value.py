import math

def solve():
    n = int(input())
    a = list(map(int, input().split()))
    
    a.sort(reverse=True)

    final_value = 0
    for i in range(n):
        if i % 2 == 0:
            final_value += a[i]
        else:
            final_value -= a[i]
    
    print(final_value)


t = int(input())
for _ in range(t):
    solve()
