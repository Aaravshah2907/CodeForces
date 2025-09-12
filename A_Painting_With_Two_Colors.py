testcases = int(input())
for _ in range(testcases):
    n ,a, b = map(int, input().split())
    n_parity = n % 2
    a_parity = a % 2
    b_parity = b % 2
    if a <= b:
        if n_parity == b_parity:
            print("YES")
        else:
            print("NO")
    else:
        if n_parity == a_parity and n_parity == b_parity:
            print("YES")
        else:
            print("NO")