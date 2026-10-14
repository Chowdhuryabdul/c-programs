a, b = map(int, input().split())
# print(a, b)
found = False
for i in range(a, b+1):
    # we will modify the num later in the while loop. as num and i will have the same number, if i do not store it another variable than it will be problematic to modify in while loop. so the nnumber is i will be unchaged 
    num = i
    lucky = True
    while num > 0:
        # to get the last digit
        digit = num % 10
        if digit != 4 and digit != 7:
            lucky = False
            break
        # now remove the last digit
        num = num // 10
    if lucky:
        print(i, end=" ")
        found = True
if found == False:
    print(-1)