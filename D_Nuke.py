# n = int(input())
# data = []
# for _ in range(n):
#     data_s = input().split(" ")
#     data_i = [int(x) for x in data_s]
#     data.append(data_i)
# data.sort()
# count = 0
# def distance(x1,x2,y1,y2):
#     return ((x1-x2)**2+(y1-y2)**2)**0.5

# for x in range(len(data)):
#     for y in range(x-1,len(data)):
#         if x != y:
#             x1 = data[x][0]
#             y1 = data[x][1]
#             x2 = data[y][0]
#             y2 = data[y][1]
#             if distance(x1,x2,y1,y2) <= data[x][2]:
#                 count += 1
# print(count)

import sys
from bisect import bisect_left, bisect_right

def distance_squared(x1, x2, y1, y2):
    return (x1 - x2) ** 2 + (y1 - y2) ** 2  # Avoid sqrt for efficiency

def count_valid_pairs(points):
    points.sort()  # Sort by x-coordinates
    active_set = []
    count = 0

    for x, y, r in points:
        while active_set and active_set[0][0] < x - r:  # Remove out-of-range points
            active_set.pop(0)
        
        # Check valid points in range
        for px, py in active_set:
            if distance_squared(x, px, y, py) <= r ** 2:
                count += 1
        
        active_set.append((x, y))  # Add current point
    
    return count

if __name__ == "__main__":
    n = int(sys.stdin.readline().strip())
    points = [tuple(map(int, sys.stdin.readline().split())) for _ in range(n)]
    print(count_valid_pairs(points))
