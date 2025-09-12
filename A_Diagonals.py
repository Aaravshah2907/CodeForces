cases = int(input())
for _ in range(cases):
    n, k = map(int, input().split())
    if k == 0:
        print(0)
        continue
    required_diag = 1
    max_element = n-1
    k -= n
    while k>0:
        if k <= max_element:
            required_diag += 1
            k -= max_element
        else:
            required_diag += 2
            k -= 2 * max_element
        max_element -= 1
    print(required_diag)