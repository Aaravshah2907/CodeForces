n = int(input())
user_string : str = input()
if n < 26:
    print("NO")
    exit()
user_string = user_string.lower()
counter = set(x for x in user_string)
if len(counter) == 26:
    print("YES")
else:
    print("NO")