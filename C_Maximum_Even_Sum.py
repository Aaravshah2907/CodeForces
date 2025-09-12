import math
import sys
input = sys.stdin.readline 

t = int(input())
for _ in range(t):
    a, b = map(int, input().split())
    a_parity = a % 2
    b_parity = b % 2
    if a_parity == 0 and b_parity == 1:
        print(-1)
        continue
    if a_parity == 1 and b_parity == 0:
        if b % 4 == 2:
            print(-1)
            continue
        else:
            print((b//2)*a + b//(b//2))
            continue
    if a_parity == 0 and b_parity == 0:
        print((b//2)*a + b//(b//2))
        continue
    if a_parity == 1 and b_parity == 1:
        print(a*b + 1)
        continue