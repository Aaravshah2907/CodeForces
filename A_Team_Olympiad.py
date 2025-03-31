n = int(input())
a = list(map(int, input().split()))
ind1 = [index+1 for index in range(n) if a[index] == 1]
ind2 = [index+1 for index in range(n) if a[index] == 2]
ind3 = [index+1 for index in range(n) if a[index] == 3]
team = min(len(ind1), len(ind2), len(ind3))
if team == 0:
    print(0)
else:
    print(team)
    for _ in range(team):
        print(ind1[_], ind2[_], ind3[_])
        