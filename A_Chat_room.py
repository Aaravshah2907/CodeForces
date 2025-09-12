hello = "hello"
Vasya_input = input("")
j = 0
for char in Vasya_input:
    if char == hello[j]:
        j+=1
    if j == 5:
        break
if j == 5:
    print("YES")
else:
    print("NO")