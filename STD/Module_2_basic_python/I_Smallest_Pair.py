t = int(input())
for test in range(t):
    n = int(input())
    numbers = list(map(int,input().split()))
# print(*numbers)
    smallest = float('inf')

    for i in range(n):
        for j in range(i + 1, n):
            result = numbers[i] + numbers[j] + j - i

            if result < smallest:
                smallest = result
    print(smallest)