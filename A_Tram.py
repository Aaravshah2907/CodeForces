n = int(input())
p = []
q = []
max = 0
current = 0

for _ in range(n):
    x, y = map(int, input().split())
    p.append(x)
    q.append(y)

for i in range(n):
    current += q[i] - p[i]
    if current > max:
        max = current
print(max)