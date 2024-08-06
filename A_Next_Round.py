n,k = input().split(" ")
arr = input().split(" ")
boundary = int(arr[int(k) - 1])
score = 0
for i in range(int(n)):
    if int(arr[i]) >= boundary and int(arr[i]):
        score += 1
print(score)