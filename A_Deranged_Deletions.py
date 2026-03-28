t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    b = sorted(a)
    c = [ x-y for x,y in zip(a,b)]
    c_zero = sum(1 for x in c if x == 0)
    if n == 1 or c_zero > 1:
        print("NO")
        continue 
    if n == 2 and c_zero == 0:
        print("YES")
        print(2)
        print(*a)
        continue       
    
    if c_zero == 1: 
        c_zero_loc = c.index(0)
        a.remove(a[c_zero_loc])
    elif n != 2:
        a.remove(max(a))
    print("YES")
    print(n-1)
    print(*a)