testcases = int(input())
for _ in range(testcases):
    s1, s2, s3, s4 = map(int, input().split())
    
    g_max = max(s1,s2,s3,s4)
    max1 = max(s1,s2)
    max2 = max(s2,s3)

    if g_max == s1:
        g2_max = max(s2, s3, s4)
        if g2_max == s2:
            print("NO")
            continue
    elif g_max == s2:
        g2_max = max(s1, s3, s4)
        if g2_max == s1:
            print("NO")
            continue
    elif g_max == s3:
        g2_max = max(s2, s1, s4)
        if g2_max == s4:
            print("NO")
            continue
    elif g_max == s4:
        g2_max = max(s2, s3, s1)
        if g2_max == s3:
            print("NO")
            continue
    else:
        print("No semifinal winner is the overall winner")
    print("YES")