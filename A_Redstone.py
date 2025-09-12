testcases = int(input())
for _ in range(testcases):
    n = int(input())
    gears = list(map(int, input().split()))
    gears_dict = {}
    for gear in gears:
        if gear in gears_dict:
            gears_dict[gear] += 1
        else:
            gears_dict[gear] = 1
    gear_dict_vals = list(gears_dict.values())
    gear_dict_vals_max = max(gear_dict_vals)
    if gear_dict_vals_max > 1:
        print("YES")
    else:
        print("NO")
    