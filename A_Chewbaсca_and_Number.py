num = input()
newnum = ''
for i in num:
    if int(i) >= 5:
        newnum += str(9 - int(i))
    else:
        newnum += i
if newnum[0] == '0':
    newnum = '9' + newnum[1:]
print(newnum)