testcases = int(input())
for _ in range(testcases):
    s = input()
    while "FFT" in s or "NTT" in s:
        s = ''.join(sorted(s, reverse=True))
    print(s)
