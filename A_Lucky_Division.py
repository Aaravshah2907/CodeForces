number = int(input())
list_num = [4 , 7 , 
            44, 47, 74, 77,
            444, 447, 474, 477, 744, 747, 774, 777]
partial_lucky = 0
for num in list_num:
    if number >= num:
        if number % num == 0:
            partial_lucky = 1
            break
print("YES" if partial_lucky else "NO")