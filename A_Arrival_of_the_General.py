n = int(input())
heights = list(map(int, input().split()))
max_height = max(heights)
min_height = min(heights)
max_i = n-1
min_i = 0
for index, height in enumerate(heights):
    if height == max_height:
        max_i = index
        break
    
for index, height in enumerate(reversed(heights)):
    if height == min_height:
        min_i = index
        break
if max_i >= n - min_i:
    print(max_i + min_i - 1)
else:
    print(max_i + min_i)