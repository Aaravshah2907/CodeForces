num = int(input())
if num >= 0:
    print(num)
else:
    pos_no = -num
    digits = len(str(pos_no))
    pos_no_str_1 = str(pos_no)[:-1]
    pos_no_str_2 = str(pos_no)[:-2] + str(pos_no)[-1]
    if pos_no_str_1 == '':
        pos_no_str_1 = '0'
    if pos_no_str_2 == '':
        pos_no_str_2 = '0'
    if int(pos_no_str_1) < int(pos_no_str_2):
        print(-int(pos_no_str_1))
    else:
        print(-int(pos_no_str_2))