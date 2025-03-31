matrix = []
for i in range(5):
    matrix.append(list(map(int, input().split())))

row, col = 0, 0
for i in range(5):
    for j in range(5):
        if matrix[i][j] == 1:
            row, col = i, j
            break
print(abs(row-2) + abs(col-2))