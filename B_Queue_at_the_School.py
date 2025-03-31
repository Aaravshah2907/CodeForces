n,t = map(int,input().split())
seq = list(input())
for i in range(t):
    j = 0
    while j < n-1:
        if seq[j] == 'B' and seq[j+1] == 'G':
            seq[j],seq[j+1] = seq[j+1],seq[j]
            j += 1
        j += 1
print(''.join(seq))