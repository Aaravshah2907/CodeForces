testcases = int(input())
for _ in range(testcases):
    k, x = map(int, input().split())
    while k:
        # Check if we can reverse the 3x+1 step
        if (x - 1) % 3 == 0 and ((x - 1) // 3) % 2 == 1:
            x = (x - 1) // 3
        else:
            x *= 2
        k -= 1
    print(x)
