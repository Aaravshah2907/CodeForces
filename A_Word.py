word = input()
word_length = len(word)
word_lower_number = 0
for i in range(word_length):
    if word[i].islower():
        word_lower_number += 1
if word_lower_number >= word_length / 2:
    print(word.lower())
else:
    print(word.upper())