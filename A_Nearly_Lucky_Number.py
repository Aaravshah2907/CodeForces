number = int(input())
list_num = [4, 7,
            44, 47, 74, 77,
            444, 447, 474, 477, 744, 747, 774, 777]
partial_lucky = False

digits = [int(d) for d in str(number)]
count = sum(1 for d in digits if d == 4 or d == 7)

partial_lucky = True if count in list_num else False

print("YES" if partial_lucky else "NO")