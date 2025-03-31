

t = int(input())
for _ in range(t):
    n,k = map(int,input().split())
    s = input()
    s_rev = s[::-1]
    if k == 0:
        if s>=s_rev:
            print("NO")
        else:
            print("YES")
    else:
        if len(set(s)) == 1:
            print('NO')
        else:
            print('YES')
            
        
    
    
    