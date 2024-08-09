T = int(input())
for case in range(T):
    maxGames = 0
    user = input().split(" ")
    a1,a2,b1,b2 = int(user[0]),int(user[1]),int(user[2]),int(user[3])
    if a1 > b1:
        if a2 >= b2:
            maxGames += 1
    if a1 > b2:
        if a2 >= b1:
            maxGames += 1
    if a2>b1:
        if a1>=b2:
            maxGames += 1
    if a2 > b2:
        if a1 >= b1:
            maxGames += 1
    if a1 == b1:
        if a2 > b2:
            maxGames += 1
    if a1 == b2:
        if a2 > b1:
            maxGames += 1
    if a2 == b1:
        if a1>b2:
            maxGames += 1
    if a2 == b2:
        if a1 > b1:
            maxGames += 1
    print(maxGames)
    
    
    