testcases = int(input())
for _ in range(testcases):
    n , j ,k = map(int, input().split())
    strengths = list(map(int, input().split()))
    researched_val = strengths[j-1]
    if k > 1 :
        print("YES")
    elif k == 1:
        if researched_val == max(strengths):
            print("YES")
        else:
            print("NO")
    else:
        print("NO")