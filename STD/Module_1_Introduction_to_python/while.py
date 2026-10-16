num = 1
# it is condition to run the while loop
while num <= 10:
    print(num)
#     # num ++ - it is i can not write in the python
    num = num + 1

# use of break 
while num <= 10:
    print(num)
    # if increament or decrement is here than it will not go to 5
    num = num + 1 
    if num == 5:
        break
    # if i give that increment and decrement here than it will 


while num <= 10:
    num = num + 1
    # it will skip 5
    if num == 5:
        continue
    print (num)

num = 0

while num <= 10:
    num = num + 1
    if num % 2 == 1:
        continue
    print(num)