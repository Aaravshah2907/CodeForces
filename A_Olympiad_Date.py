date = {'0': 3, '1': 1, '2': 2, '3': 1 , '5' : 1}

t = int(input())
for i in range(t):
    date_copy = date.copy()
    n = int(input())
    s = input().split(" ")
    count = 0
    for j in s:
        if date_copy == {}:
            break
        if j in date_copy:
            count += 1
            date_copy[j] -= 1
            if date_copy[j] == 0:
                del date_copy[j]
        else:
            count += 1
    if date_copy == {}:
        print(count)
    else:
        print(0)