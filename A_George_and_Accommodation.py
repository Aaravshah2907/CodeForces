n = int(input())
p = []
q = []
count = 0

for _ in range(n):
    x, y = map(int, input().split())
    p.append(x)
    q.append(y)
    
for i in range(n):
    if p[i] <= q[i] - 2:
        count += 1
print(count)