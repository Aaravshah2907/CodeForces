user_input = input()
if 'WUB' in user_input:
    str1 = (' '.join(user_input.split('WUB')).strip())
    print(' '.join(str1.split()))
else:
    print(user_input)

