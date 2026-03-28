import sys
input = sys.stdin.readline

def solve():
    n, k = map(int, input().split())
    a = list(map(int, input().split()))

    total_counts = [0] * (n + 1)
    for val in a:
        total_counts[val] += 1

    # Step 1: Check divisibility and calculate target counts
    possible = True
    target_counts = [0] * (n + 1)
    for i in range(1, n + 1):
        if total_counts[i] % k != 0:
            possible = False
            break
        target_counts[i] = total_counts[i] // k

    if not possible:
        print(0)
        return

    # Step 2: Sliding window to count awesome subarrays
    awesome_count = 0
    r = 0
    window_counts = [0] * (n + 1)

    for l in range(n):
        while r < n:
            current_val = a[r]
            if window_counts[current_val] < target_counts[current_val]:
                window_counts[current_val] += 1
                r += 1
            else:
                break
        awesome_count += (r - l)
        window_counts[a[l]] -= 1

    print(awesome_count)


t = int(input())
for _ in range(t):
    solve()
