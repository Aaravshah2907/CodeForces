def mexify(arr: list[int]) -> int:
    present = set(arr)
    mex = 0
    while mex in present:
        mex += 1
    return mex

t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    n_list = list(map(int, input().split()))
    for _ in range(k):
        mexlist = [0] * n
        for i in range(n):
            mexlist[i] = mexify(n_list[:i] + n_list[i+1:])
        n_list = mexlist[:]
    print(sum(n_list))
