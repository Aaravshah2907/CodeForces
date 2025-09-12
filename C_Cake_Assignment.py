t = int(input())    
for _ in range(t):
    k, x = map(int, input().split())
        
    total = 2**(k+1)
    initial_c = 2**k
    initial_v = 2**k
        
    if x == initial_c:
        print(0)
        print("")
        continue
        

    queue = [(x, total - x, [])]
    visited = {(x, total - x)}
        
    while queue:
        c, v, ops = queue.pop(0)  # Remove from front (like deque.popleft())
            
            
        if c == initial_c and v == initial_v:
            ops.reverse()
            print(len(ops))
            if len(ops) > 0:
                print(' '.join(map(str, ops)))
            break
        
        if 2 * c <= total:
            prev_c = 2 * c
            prev_v = total - prev_c
            if prev_v >= 0 and (prev_c, prev_v) not in visited:
                visited.add((prev_c, prev_v))
                queue.append((prev_c, prev_v, ops + [1]))
            
        if 2 * v <= total:
            prev_v = 2 * v
            prev_c = total - prev_v
            if prev_c >= 0 and (prev_c, prev_v) not in visited:
                visited.add((prev_c, prev_v))
                queue.append((prev_c, prev_v, ops + [2]))

