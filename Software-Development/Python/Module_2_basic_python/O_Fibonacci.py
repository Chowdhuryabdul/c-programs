n = int(input())
a = 0
b = 1

if n == 1:
    print(0)
else:
    
    for i in range(2, n):
        next_nmbr = a + b
        a = b
        b = next_nmbr
    print(b)
