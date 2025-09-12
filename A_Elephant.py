distance = int(input())
min_steps = distance // 5
if distance % 5 != 0:
    min_steps += 1
print(min_steps)