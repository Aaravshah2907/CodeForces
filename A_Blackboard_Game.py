testcases = int(input())
for _ in range(testcases):
    n = int(input())
    if n % 4 == 0:
        print("Bob")
    else:
        print("Alice")