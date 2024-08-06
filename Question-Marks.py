from collections import Counter
testcase = int(input())
for case in range(testcase):
    n = int(input())
    dict = ["A","B","C","D"]
    cnt = Counter(input())
    maxScore = 0
    for key in dict:
        if cnt[key] <= n:
            maxScore += cnt[key]
        else:
            maxScore += n
    print(maxScore)
    