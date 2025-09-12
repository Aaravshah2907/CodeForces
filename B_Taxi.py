def min_taxis(n, a):
    ones = a.count(1)
    twos = a.count(2)
    threes = a.count(3)
    fours = a.count(4)
    taxis = fours + min(threes, ones) + (threes - min(threes, ones)) + (twos // 2) + (twos % 2) + ((ones - min(threes, ones) - (twos % 2) * 2 + 3) // 4 if ones - min(threes, ones) - (twos % 2) * 2 > 0 else 0)
    return taxis

# Example usage:
n = int(input())
group_sizes = list(map(int, input().split()))
print(min_taxis(n, group_sizes))