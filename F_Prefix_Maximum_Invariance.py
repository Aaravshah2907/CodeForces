testcases = int(input())
for _ in range(testcases):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    z = [0] * n
    z[0] = current_max = a[0]
    for i in range(n):
        max_a_lim = max(a[:i+1])
        max_z_lim = max(z[:i+1])
        
        