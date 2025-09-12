n = int(input())
array = list(map(int, input().split()))
array.sort()
sum_array = sum(array)
required_sum = (sum_array // 2)
current_sum = 0
count = 0
for i in range(n - 1, -1, -1):
    current_sum += array[i]
    count += 1
    if current_sum > required_sum:
        print(count)
        break
    