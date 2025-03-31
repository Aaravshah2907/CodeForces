import sys

def min_weapon_replacement_cost(N, weapons):
    weapons.sort()  # Sort the current weapon categories
    optimal_weapons = list(range(1, N + 1))  # The ideal weapon categories
    
    # Compute the minimum cost by summing the absolute differences
    return sum(abs(weapons[i] - optimal_weapons[i]) for i in range(N))

input = sys.stdin.read
data = input().split()
    
index = 0
t = int(data[index])
index += 1
results = []
    
for _ in range(t):
    N = int(data[index])
    index += 1
    weapons = list(map(int, data[index:index + N]))
    index += N
    results.append(str(min_weapon_replacement_cost(N, weapons)))
    
sys.stdout.write("\n".join(results) + "\n")

