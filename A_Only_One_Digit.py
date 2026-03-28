testcases = int(input())
for _ in range(testcases):
    n = int(input())
    list_nums = [int(x) for x in str(n)]
    list_nums.sort()
    print(list_nums[0])
    