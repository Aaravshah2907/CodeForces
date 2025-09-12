t = int(input())
for _ in range(t):
    n = int(input())
    b = list(map(int, input().split()))

    freq_groups = {}
    for i in range(n):
        val = b[i]
        if val not in freq_groups:
            freq_groups[val] = []
        freq_groups[val].append(i)

    a = [0] * n
    color = 1
    possible = True

    for freq in freq_groups:
        indices = freq_groups[freq]
        if len(indices) % freq != 0:
            possible = False
            break
        for i in range(0, len(indices), freq):
            group = indices[i:i+freq]
            for idx in group:
                a[idx] = color
            color += 1

    if possible:
        print(*a)
    else:
        print(-1)
