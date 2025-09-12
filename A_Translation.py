user_str = input()
rev_user_str = ''.join(reversed(user_str))
check_str = input()
if check_str.lower() == rev_user_str.lower():
    print("YES")
else:
    print("NO")