cases = int(input())
for _ in range(cases):
    n = int(input())
    min_arr = list(map(int, input().split()))
    max_arr = list(map(int, input().split()))
    for i in range(n):
        if min_arr[i] > max_arr[i]:
            min_arr[i], max_arr[i] = max_arr[i], min_arr[i]
    pdt = max(min_arr) * max(max_arr)
    print(pdt)