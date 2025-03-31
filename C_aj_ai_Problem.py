n = int(input())
for _ in range(n):
    size = int(input())
    data_s = input().split(" ")
    data_i = [int(x) for x in data_s]
    data_i.sort()
    for x in range(len(data_i)):
        for y in range(len(data_i)):
            while data_i[x] <= data_i[y] and data_i[x] != 1 and data_i[x] and x !=y:
                data_i[y] = int(data_i[y]/data_i[x])
    print(sum(data_i))