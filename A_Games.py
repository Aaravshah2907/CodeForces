n = int(input())
outfits = []
for i in range(n):
    h,a = map(int, input().split())
    outfits.append((h,a))
count = 0
for i in range(n):
    for j in range(n):
        if outfits[i][0] == outfits[j][1]:
            count += 1
print(count)