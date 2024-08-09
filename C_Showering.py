T = int(input())
for case in range(T):
    user = input().split(" ")
    n,s,m = int(user[0]),int(user[1]),int(user[2])
    start = []
    end = [0]
    for i in range(n):
        time = input().split(" ")
        start.append(int(time[0]))
        end.append(int(time[1]))
    start.append(m)
    res = False
    for i in range(n+1):
        if start[i] - end[i] >= s:
            res = True
            break
    if not res:
        print("NO")
    else:
        print("YES")
         