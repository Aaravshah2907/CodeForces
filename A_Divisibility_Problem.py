testcases = int(input())
for _ in range(testcases):
    a, b = map(int, input().split())
    mod = a % b
    if mod:
        result = b - a % b
    else:
        result = mod
    print(result)