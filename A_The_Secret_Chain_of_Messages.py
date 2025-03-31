n = int(input())
text = input()
nums = [int(x) for x in text.split()]
blank = [0]*n
output = "SECURE"
for num in nums[0:-1]:
    if num == 1 or blank[num-1] == 1:
        output = "RISK"
        break
    else:
        blank[num-1] = 1
        
print(output)