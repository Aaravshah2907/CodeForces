k,n,w = input().split()
k = int(k)
n = int(n)
w = int(w)
total_cost = 0
for i in range(1, w + 1):
    total_cost += k * i
if total_cost <= n:
    print(0)
else:
    print(total_cost - n)