T = int(input())
for i in range(T):
    score = 0
    n = int(input())
    if n ==1:
        print("0")
        continue
    while (n != 1):
        if n%6==0:
            n/=6
            score += 1
        elif n%3==0:
            n*=2
            score+=1
        else:
            score = -1
            break
    print(score)
        