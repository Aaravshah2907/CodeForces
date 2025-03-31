def solve(a):
    odd_list = [x for x in a if x % 2 != 0]
    odd_list.sort()
    even_list = [x for x in a if x % 2 == 0 and x >0]
    if not even_list:
        print (max(odd_list))
    elif len(even_list)%2 == 1:
        elem = even_list.pop()
        odd_list[0] += elem
        new_list = odd_list + even_list
        solve(new_list)
    else:
        odd_list[0] +=2
        even_list[0] -= 2
        new_list = odd_list + even_list
        print(new_list)
        solve(new_list)

t = int(input())
for _ in range(t):
    length = int(input())
    a = list(map(int, input().split()))
    solve(a)