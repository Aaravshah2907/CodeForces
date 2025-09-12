testcases = int(input())
for _ in range(testcases):
    n = int(input())
    original_word = input()
    m = int(input())
    b = list(input())
    # how to split a string into chr
    order = list(input())
    for index in range(len(order)):
        if order[index] == 'V':
            original_word = str(b[index]) + original_word
        if order[index] == 'D':
            original_word = original_word + str(b[index])
    print(original_word)