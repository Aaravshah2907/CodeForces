import sys

def solve(n,a,b):
    odd_count, even_count = 0, 0
    for i in range(n):
        if i%2==0:
            if a[i] == '0':
                odd_count += 1
        else:
            if b[i] == '0':
                odd_count += 1
    for i in range(n):
        if i%2==0:
            if b[i] == '0':
                even_count += 1
        else:
            if a[i] == '0':
                even_count += 1
        half_length = n/2
    if odd_count >= half_length and even_count >= half_length:
        print("YES")
    else:
        print("NO")
    
# Read number of test cases
t = int(sys.stdin.readline().strip())
for _ in range(t):
    n = int(sys.stdin.readline().strip())
    a = list(sys.stdin.readline().strip())
    b = list(sys.stdin.readline().strip())
    solve(n,a,b)
