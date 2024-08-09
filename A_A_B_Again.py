T = int(input())
for case in range(T):
    num = int(input())
    sum = 0
    while(num):
        dig = num%10
        num = num//10
        sum += dig
    print(sum)