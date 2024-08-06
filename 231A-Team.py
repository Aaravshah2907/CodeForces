testcase = int(input())
maxScore = 0
for case in range(testcase):
    count = 0
    score = input().split(" ")
    for ind in score:
        if ind == "1":
            count += 1
    if count>=2:
        maxScore += 1
print(maxScore)