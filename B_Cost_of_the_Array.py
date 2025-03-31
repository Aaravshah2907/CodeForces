### Problem: https://codeforces.com/contest/1401/problem/B
'''
def min_cost_of_array(n, k, a):
    # We need to split the array into k subarrays
    # The optimal way is to take the smallest k/2 elements for the even indexed subarrays
    b = a[:n//2]
    
    # Add 0 to the end of array b
    b.append(0)
    
    # Calculate the cost of array b
    for i in range(len(b)):
        if b[i] != i:
            if b[i]:
                return i
    return len(b)


cases=int(input())
for case in range(cases):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    print(min_cost_of_array(n, k, a))

'''

