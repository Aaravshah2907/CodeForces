def balance_mishkin(t, test_cases):
    results = []
    for n, s in test_cases:
        count = {'L': 0, 'I': 0, 'T': 0}
        for ch in s:
            count[ch] += 1
        
        target = n // 3
        if n % 3 != 0:
            results.append("-1")
            continue
        
        if count['L'] == target and count['I'] == target and count['T'] == target:
            results.append("0")
            continue
        
        operations = []
        s = list(s)
        i = 0
        while count['L'] != target or count['I'] != target or count['T'] != target:
            if i >= len(s) - 1:
                break
            if count[s[i]] > target:
                for c in "LIT":
                    if c != s[i] and c != s[i+1] and count[c] < target:
                        s.insert(i+1, c)
                        operations.append(i+1)
                        count[c] += 1
                        break
            i += 1
        
        results.append(str(len(operations)))
        results.extend(map(str, operations))
    
    return "\n".join(results)

# Example usage
t = int(input())
for _ in range(t):
    length = int(input())
    string = input()
    a = list(map(int, input().split()))
    solve(a)
test_cases = [(5, "TILII"), (1, "L"), (3, "LIT")]
print(balance_mishkin(t, test_cases))
