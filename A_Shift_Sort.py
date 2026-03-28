t = int(input())
for _ in range(t):
    n = int(input())
    s = input().strip()
    zeros = s.count('0')
    misplaced_ones = sum(1 for c in s[:zeros] if c == '1')
    print(misplaced_ones)
