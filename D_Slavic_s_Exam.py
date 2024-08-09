T = int(input())
for case in range(T):
    s = [ch for ch in input()]
    t = [ch for ch in input()]
    match,tindex = 0,0
    for sindex in range(len(s)):
        if tindex < len(t):
            if t[tindex] == s[sindex] or s[sindex] == '?':
                s[sindex] = t[tindex]
                tindex += 1
                match += 1
                continue
    for index in range(len(s)):
        if s[index] == '?':
            s[index] = "a"
    if match == len(t):
        print("YES")
        print("".join(s))
        continue
    else:
        print("NO")
    