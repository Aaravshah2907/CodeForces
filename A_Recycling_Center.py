testcases = int(input())
for _ in range(testcases):
    n , k = map(int, input().split())
    a = list(map(int, input().split()))
    count = 0
    for times in range(n):
        max_element_under_k = 0
        for i in range(len(a)):
            if a[i] <= k:
                max_element_under_k = max(max_element_under_k, a[i])
        if max_element_under_k == 0:
            break
        a.remove(max_element_under_k)
        a = [x*2 for x in a]
    count = len(a)
    print(count)
    
    