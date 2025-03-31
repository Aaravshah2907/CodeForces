testcases = int(input())
for _ in range(testcases):
    n = int(input())
    if (n/2)%2 == 1:
        print("NO")
        continue
    print("YES")
    evens = [2*i for i in range(1, n//2+1)]
    even_sum = sum(evens)
    odds = [2*i-1 for i in range(1, n//2)]
    odd_sum = sum(odds)
    last = even_sum - odd_sum
    print(*evens, last, *odds, sep=" ")