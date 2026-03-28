n = int(input())
groups = 1
arr = []
for _ in range(n):
    arr.append(input())
prev_mag = arr[0]
for x in range(1,n):
    if arr[x] == prev_mag:
        prev_mag = arr[x]
        continue
    groups+=1
    prev_mag = arr[x]
print(groups)