n , m = map(int, input().split())
a = list(map(int, input().split()))

time_required = 0
current_pos = 1
for i in range(m):
    if a[i] >= current_pos:
        time_required += a[i] - current_pos
    else:
        time_required += n - (current_pos - a[i])
    current_pos = a[i]
print(time_required)