a = input().lower()
b = input().lower()

length = len(a)
for i in range(length):
    if a[i] < b[i]:
        print(-1)
        break
    elif a[i] > b[i]:
        print(1)
        break
    elif i == length-1:
        print(0)
        break