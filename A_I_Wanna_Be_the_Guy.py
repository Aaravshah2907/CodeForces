n = int(input())
x = list(map(int, input().split()))
x = x[1:]
y = list(map(int, input().split()))
y = y[1:]
comb = set(x+y)
if 0 in comb: comb.remove(0)
if len(comb) == n:
    print("I become the guy.")
else:
    print("Oh, my keyboard!")