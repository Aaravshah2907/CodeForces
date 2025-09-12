t = int(input())
for _ in range(t):
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    a.sort(reverse=True)
        
    total = 0
    if m <= n:
        for i in range(m):
            total += a[i] * (m - i)
    else: 
        total = a[0] * m  
        for i in range(1, n):
            total += a[i] * (m - i)
    
    print(total)