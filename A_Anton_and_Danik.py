n = int(input())
order_s = input()
order_l = [d for d in order_s]
count_A = sum(1 for res in order_l if res == 'A')
count_D = n - count_A
if count_A > count_D:
    print("Anton")
elif count_D > count_A:
    print("Danik")
else:
    print("Friendship")
