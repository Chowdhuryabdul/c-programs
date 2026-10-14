numbers = [20, 30, 40 , 50, 60]

# to push an element at the end
numbers.append(500)
print(numbers)

# to innsert in any particular position - insert()
numbers.insert(2, 700)
print(numbers)

# to remove a particular element
numbers.remove(40)
print(numbers)
# in this case in numbr is not in the list than it will give a error. so in such case we an put a condition before removing.
# if 50 in numbers:
#     numbers.remove(40)
# print(numbers)

# to delete the last element
last = numbers.pop()
print(last)

# to find the index - we can also set from where to where it will be searched
# if the the element is not exist in the list than it will give en error. rather i can give a condition where it element is not there than it will give -1
index = numbers.index(20)
print(index)

if 20 in numbers:
    index = numbers.index(20)
    print(index)

# sort the list
# i cna also sert with key
sorted = numbers.sort()
print(numbers)