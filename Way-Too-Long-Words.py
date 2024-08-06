testcases = int(input())
for case in range(testcases):
    word = input()
    length = len(word)
    if length>10:
        result = word[0] + str(length-2) + word[-1]
    else:
        result = word
    print(result)