testcases = int(input())
for _ in range(testcases):
    n = int(input())
    grumpiness = list(map(int, input().split()))
    grumpiness.sort()
    total_grumpiness = 0
    for i in range(n-1, -1, -2):
        total_grumpiness += grumpiness[i]
    print(total_grumpiness)