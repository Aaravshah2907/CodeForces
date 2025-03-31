import sys
import math

def count_valid_k(n, s):
    results = []
    beauty = 0  # Tracks the beauty of the current prefix

    for i in range(1, n):
        if s[i] != s[i-1]:
            beauty += 1  # Increase beauty when a transition occurs
        
        beauty_plus_one = beauty + 1  # The number of segments
        valid_k_count = 0

        # Find divisors of beauty + 1
        for d in range(1, int(math.sqrt(beauty_plus_one)) + 1):
            if beauty_plus_one % d == 0:
                valid_k_count += 1  # Count divisor `d`
                if d != beauty_plus_one // d:
                    valid_k_count += 1  # Count its pair divisor

        results.append(str(valid_k_count))

    print(" ".join(results))

# Read input
input = sys.stdin.read
data = input().split()
index = 0
t = int(data[index])  # Number of test cases
index += 1

# Process test cases
output = []
for _ in range(t):
    n = int(data[index])
    index += 1
    s = data[index]
    index += 1
    count_valid_k(n, s)
