word = input()
letters_0 = word[0]
letters = list(word[1:])
if letters:
    if letters_0.islower() and all(letter.isupper() for letter in letters):
        letters = [letters_0.upper()] + [letter.lower() for letter in letters]
        print(''.join(letters))
    elif letters_0.isupper() and all(letter.isupper() for letter in letters):
        letters = [letters_0.lower()] + [letter.lower() for letter in letters]
        print(''.join(letters))
    else:
        print(word)
elif letters_0.isupper():
    print(word.lower())
else:
    print(word.upper())