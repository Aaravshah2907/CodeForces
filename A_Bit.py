testcases = int(input())
x = 0
for case in range(testcases):
    subj = input()
    if "++" in subj:
        x += 1
    else:
        x -= 1
print(x)