def solve():
    import sys
    input = sys.stdin.read
    data = list(map(int, input().split()))
    
    t = data[0]
    idx = 1
    results = []
    
    for _ in range(t):
        n = data[idx]; idx += 1
        arr = data[idx:idx+n]; idx += n
        
        freq = [0]*101
        for x in arr:
            freq[x] += 1
        
        # Get first mex
        mex1 = 0
        while mex1 < 101 and freq[mex1] > 0:
            freq[mex1] -= 1
            mex1 += 1
        
        # Get second mex
        mex2 = 0
        while mex2 < 101 and freq[mex2] > 0:
            freq[mex2] -= 1
            mex2 += 1
        
        # Remaining sum
        leftover_sum = sum(i * freq[i] for i in range(101))
        
        # Max score possible
        score = mex1 + mex2 + leftover_sum
        
        results.append(str(score))
    
    print("\n".join(results))

solve()