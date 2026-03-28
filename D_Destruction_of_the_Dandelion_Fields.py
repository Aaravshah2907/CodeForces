import math
t = int(input())
for _ in range(t):
    n = int(input())
    fields = list(map(int, input().split()))
    
    odd = sorted([x for x in fields if x % 2 == 1], reverse=True)
    even = [x for x in fields if x % 2 == 0]
    
    sum_even = sum(even)
    
    # mower toggling means cutting odd fields in order: cut odd[0], skip odd[1], cut odd[2], ...
    if len(odd) == 0: 
        print(0)
    else: 
        sum_odd = sum(odd[i] for i in range(0, math.ceil((len(odd)+1)//2) , 1))
        print(sum_even + sum_odd)
