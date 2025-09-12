HQ9_var = "HQ9"
user_str = input()
if any(char in HQ9_var for char in user_str):
    print("YES")
else:
    print("NO")