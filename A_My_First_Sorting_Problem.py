testcases = int(input())
for _ in range(testcases):
    x,y = map(int, input().split())
    if x > y:
        print(f"{y} {x}")
    else:
        print(f"{x} {y}")