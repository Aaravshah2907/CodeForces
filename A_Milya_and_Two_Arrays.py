testcases = int(input())

for test in range(testcases):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    c = [a[i] + b[i] for i in range(n)]
    
    if len(set(a)) + len(set(b)) > 3:
        print("YES")
    else:
        print("NO")