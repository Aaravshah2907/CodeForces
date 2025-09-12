n = int(input())
a = list(map(int, input().split()))
sum = 0
for i in a:
    if i == 1:
        print("HARD")
        exit()
print("EASY")