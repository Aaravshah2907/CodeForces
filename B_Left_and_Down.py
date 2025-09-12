testcases = int(input())

def gcd(x, y):
    while(y):
        x, y = y, x % y
    return x

for _ in range(testcases):
    a ,b, k = map(int, input().split())
    gcd_a_b = gcd(a, b)
    if a//gcd_a_b <= k and b//gcd_a_b <= k:
        print("1")
    else:
        print("2")
    