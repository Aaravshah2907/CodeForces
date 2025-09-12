s, n = map(int, input().split())
x, y = [], []
for _ in range(n):
    a, b = map(int, input().split())
    x.append(a)
    y.append(b)

for i in range(n):
    for j in range(i + 1, n):
        if x[i] > x[j]:
            x[i], x[j] = x[j], x[i]
            y[i], y[j] = y[j], y[i]

cond = True
for i in range(n):
    if s > x[i]:
        s += y[i]
    else:
        cond = False
        break
print("YES" if cond else "NO")
