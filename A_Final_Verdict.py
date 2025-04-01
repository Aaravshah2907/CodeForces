testcases = int(input())
for _ in range(testcases):
    n,k = map(int, input().split())
    arr = list(map(int, input().split()))
    sum_arr = sum(arr)
    if sum_arr == n*k:
        print("YES")
    else:
        print("NO")