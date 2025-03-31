from collections import Counter
t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    b = Counter(a)
    for i in b:
        if b[i] == 1:
            operation = i
            break
    print(a.index(operation) + 1)