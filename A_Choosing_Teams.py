n,k = map(int, input().split())
y = list(map(int, input().split()))
count = 0
for exp in y:
    if exp+k <= 5:
        count += 1
print(count//3)