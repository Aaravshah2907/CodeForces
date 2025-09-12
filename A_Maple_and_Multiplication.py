testcases = int(input())
for _ in range(testcases):
    a, b = map(int, input().split())
    mn = min(a, b)
    mx = max(a, b)
    if mx == mn:
        print(0)
        continue
    if mx % mn == 0:
        print(1)
        continue
    print("2")
