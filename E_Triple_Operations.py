T = int(input())
for case in range(T):
    user = input().split(" ")
    l,r = int(user[0]),int(user[1])
    op,minNum = 0,0
    arr = [num for num in range(l,r+1)]
    temp = arr.pop(0)
    if len(arr)>2:
        while(temp):
            temp = temp//3
            op += 1
            if minNum == len(arr) -1 and arr[minNum] > arr[0]:
                minNum = 0
            elif arr[minNum] > arr[minNum+1] and minNum <= len(arr)-2:
                minNum += 1
            arr[minNum] *= 3
    elif len(arr) == 2:
        while(temp):
            temp = temp//3
            op += 1
            if arr[0] < arr[1]:
                arr[0] *= 3
            else:
                arr[1] *= 3
    else:
        while(temp):
            temp = temp//3
            op += 1
            arr[minNum] *= 3
        
    while (len(arr)):
        temp = arr.pop(0)
        while(temp):
            temp = temp//3
            op += 1
    print(op)
        