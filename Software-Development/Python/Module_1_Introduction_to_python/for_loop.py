# array
numbers = [2, 4, 5, 60, 7]
sum = 0
for num in numbers:
    print(num)
    sum = sum + num
    # if i am here it means i am inside the loop. to go out side it means it will start without indent
    if sum > 20:
        print('bigger sum')
# now i am out of loop
print(sum)

text = 'pagla hawa'

for char in text:
    print(char)

# if i want print from 10 to 10 by loop
# i can do it ba making a arra nums = [1, 2, 3. 4,5 ,6]
# we can do it by range - it means it will print from 1 to 9 not 10
# range(1, 10) but we can give another int which will indicate the incremenet. if i give 2 it means every time it will increase by 2
for i in range(1, 10):
    print(i)

# here it starts from 1 and increased by 2 each time
for i in range(1, 10, 2):
    print(i)


# to get the index and value - i need to use enumerate()
for index, value in enumerate(range(1, 10)):
    print(index, value)


friends = ['nnovel', 'ashir', 'rabi', 'naz']
for index, friend in enumerate(friends):
    print(index, friend)