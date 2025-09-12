def calculate_g(arr):
    count = 0
    n = len(arr)
    for i in range(n):
        for j in range(i + 1, n):
            if arr[i] > arr[j]:
                count += 1
    return count

def calculate_f_optimized(arr):
    if len(arr) <= 1:
        return 0
        
    target = tuple(sorted(arr))
    if tuple(arr) == target:
        return 0
    
    max_depth = len(arr) * (len(arr) - 1) // 2  

    queue = [(tuple(arr), 0)]
    visited = {tuple(arr): 0}  
    
    while queue:
        current, ops = queue.pop(0)
        if ops >= max_depth:
            continue
            
        current_list = list(current)
        n = len(current_list)
        
        for i in range(n - 1):
            new_arr = current_list[:]
            new_arr[i], new_arr[i+1] = new_arr[i+1], new_arr[i]
            new_tuple = tuple(new_arr)
            
            if new_tuple == target:
                return ops + 1
            
            if new_tuple not in visited or visited[new_tuple] > ops + 1:
                visited[new_tuple] = ops + 1
                queue.append((new_tuple, ops + 1))
        
        for i in range(n - 2):
            new_arr = current_list[:]
            new_arr[i], new_arr[i+2] = new_arr[i+2], new_arr[i]
            new_tuple = tuple(new_arr)
            
            if new_tuple == target:
                return ops + 1
                
            if new_tuple not in visited or visited[new_tuple] > ops + 1:
                visited[new_tuple] = ops + 1
                queue.append((new_tuple, ops + 1))
    
    return max_depth

def calculate_f_smart(arr):
    if len(arr) <= 1:
        return 0
        
    target = tuple(sorted(arr))
    if tuple(arr) == target:
        return 0
    
    if len(arr) <= 6:
        return calculate_f_optimized(arr)
    
    has_decreasing_triplet = False
    for i in range(len(arr) - 2):
        if arr[i] > arr[i+1] > arr[i+2]:
            has_decreasing_triplet = True
            break
    
    if not has_decreasing_triplet:
        return calculate_g(arr)
    
    return calculate_f_optimized(arr)

def solve():
    t = int(input())
    
    for _ in range(t):
        n, q = map(int, input().split())
        a = list(map(int, input().split()))
        
        for _ in range(q):
            l, r = map(int, input().split())
            subarray = a[l-1:r]
            if len(subarray) <= 2:
                print("YES")
                continue
            f_val = calculate_f_smart(subarray)
            g_val = calculate_g(subarray)
            is_perfect = (f_val == g_val)
            print("YES" if is_perfect else "NO")

solve()
