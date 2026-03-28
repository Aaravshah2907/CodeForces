import sys
input = sys.stdin.readline

INF = float('-inf')
t = int(input())

for _ in range(t):
    n, m = map(int, input().split())
    requirements = [(0,0)]
    for __ in range(n):
        a, b = map(int, input().split())
        requirements.append((a, b))

    dp = [[INF, INF] for _ in range(n+1)]
    dp[0][0] = 0  # Start at side 0 with 0 points
    
    for i in range(1, n+1):
        a_prev, _ = requirements[i-1]
        a_curr, b_curr = requirements[i]
        gap = a_curr - a_prev

        for last_side in [0, 1]:
            if dp[i-1][last_side] == INF:
                continue
            moves_needed = abs(last_side - b_curr)
            if moves_needed <= gap:
                points = dp[i-1][last_side] + (gap - moves_needed)
                dp[i][b_curr] = max(dp[i][b_curr], points)

    last_minute, _ = requirements[-1]
    remaining = m - last_minute
    ans = max(dp[n], dp[n][1]) + remaining
    print(ans)
