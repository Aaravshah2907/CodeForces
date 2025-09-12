cases = int(input())
for case in range(cases):
    n = int(input())
    arr = list(map(int, input().split()))
    sum_arr = sum(arr)
    check = 0
    for index in range(n-1):
        if arr[index] < 0 and arr[index + 1] < 0:
            check = -1
            break
        if arr[index]*arr[index + 1] < 0:
            check = 1
    if check == 1 :
        print(sum_arr)
    elif check == -1:
        print(sum_arr + 4)
    else:
        print(sum_arr - 4)