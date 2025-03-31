num = int(input())
stones = input()
oglen = 0
for elem in range(num-1):
    if stones[elem] == stones[elem+1]:
        oglen += 1
print(oglen)