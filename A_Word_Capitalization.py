text = input()
if text[0].islower():
    print(text[0].upper() + text[1:])
else:
    print(text)