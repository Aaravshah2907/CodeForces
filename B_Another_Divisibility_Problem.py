import sys
import math
import random
import resource
import gc

sys.setrecursionlimit(10**7)

def miller_rabin(n):
    if n < 2:
        return False
    for p in [2,3,5,7,11,13,17,19,23]:
        if n == p:
            return True
        if n % p == 0 and n != p:
            return False
    d = n - 1
    r = 0
    while d % 2 == 0:
        d //= 2
        r += 1
    for a in [2,3,5,7,11]:
        if a >= n:
            break
        x = pow(a, d, n)
        if x == 1 or x == n - 1:
            continue
        for _ in range(r - 1):
            x = (x * x) % n
            if x == n -1:
                break
        else:
            return False
    return True

def pollards_rho(n):
    if n % 2 == 0:
        return 2
    x = random.randrange(2, n - 1)
    y = x
    c = random.randrange(1, n - 1)
    d = 1
    while d == 1:
        x = (x*x + c) % n
        y = (y*y + c) % n
        y = (y*y + c) % n
        d = math.gcd(abs(x - y), n)
        if d == n:
            return pollards_rho(n)
    return d

def iterative_prime_factors(n):
    # Iterative factorization to reduce recursion and memory
    stack = [n]
    factors = []
    while stack:
        m = stack.pop()
        if m == 1:
            continue
        if miller_rabin(m):
            factors.append(m)
            continue
        d = pollards_rho(m)
        stack.append(d)
        stack.append(m // d)
    return factors

def factor_count(lst):
    counts = {}
    for x in lst:
        counts[x] = counts.get(x, 0) + 1
    return counts

def generate_divisors_stream(primes, counts, idx=0, current=1):
    if idx == len(primes):
        yield current
        return
    p = primes[idx]
    for exp in range(counts[p]+1):
        yield from generate_divisors_stream(primes, counts, idx+1, current)
        current *= p

def find_y(x):
    limit_y = 10**9
    for k in range(1, 10):
        p = 10**k - 1
        val = x * p
        pfactors = iterative_prime_factors(val)
        factors = factor_count(pfactors)
        primes = list(factors.keys())
        minimal_y = None
        for m in generate_divisors_stream(primes, factors):
            if m > x:
                y = m - x
                if y < limit_y:
                    if minimal_y is None or y < minimal_y:
                        minimal_y = y
        del pfactors
        del factors
        del primes
        del val
        if minimal_y is not None:
            return minimal_y
    return 1
"""
def main():
    input = sys.stdin.readline
    t = int(input())
    for _ in range(t):
        x = int(input())
        res = find_y(x)
        print(res)
        del res
        del x

if __name__ == "__main__":
    main()
"""
t = int(input())
usage = resource.getrusage(resource.RUSAGE_SELF)
for _ in range(t):
    x = int(input())
    y = find_y(x)
    sum = int(str(x)+str(y))
    mod = sum % (x+y)
    print(mod)
    del y
    del sum
    del mod
    gc.collect()
print(f"Max memory usage: {usage.ru_maxrss / 1024:.2f} MB")
