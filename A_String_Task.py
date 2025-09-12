user_input = input("")
new_string = ""
vovels = "aeiouyAEIOUY"
for char in user_input:
    if char in vovels:
        continue
    if char.isupper():
        new_string += "." + char.lower()
    else:
        new_string += "." + char.lower()
print(new_string)