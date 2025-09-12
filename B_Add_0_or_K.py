import math
t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    for g in range(2, k + 2):
        if math.gcd(g, k) > 1:
            continue 
        ok = True
        b = list(a)
        for i in range(n):
            if b[i] % g == 0:
                continue
            for j in range(1, k + 1):
                b[i] += k
                if b[i] % g == 0:
                    break
            if b[i] % g != 0:
                ok = False
        if ok:
            print(*b)
            break