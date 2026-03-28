testcases = int(input())
for _ in range(testcases):
    n = int(input())
    s = [x for x in input()]
    ans , bal = 0, 0
    for i in range(n):
        if s[i] == '(' : bal += 1
        else:   
            bal -= 1
            if bal < 0 : 
                bal = 0 
                ans += 1
    print(ans)