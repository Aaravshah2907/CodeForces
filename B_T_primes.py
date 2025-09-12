import sys

sqrt_lim = 1000001

def prime_squares():
    arr = [False] * sqrt_lim
    for i in range(2, int(sqrt_lim ** 0.5) + 1):
        if not arr[i]:
            for j in range(i * i, sqrt_lim, i):
                arr[j] = True
    res = set()
    for i in range(2, sqrt_lim):
        if not arr[i]:
            res.add(i * i)
    return res

if __name__ == "__main__":
    sq = prime_squares()
    n = int(sys.stdin.readline())
    a = list(map(int, sys.stdin.readline().split()))
    for x in a:
        if x in sq:
            print("YES")
        else:
            print("NO")