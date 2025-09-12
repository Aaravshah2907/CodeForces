testcases = int(input())
for test in range(testcases):
    n = int(input())
    arr = list(map(int, input().split()))
    
    arr.sort()
    left_index = 0
    right_index = n - 1
    sum = 0
    while left_index < right_index:
        sum += arr[right_index] - arr[left_index]
        left_index += 1
        right_index -= 1
        
    print(sum)