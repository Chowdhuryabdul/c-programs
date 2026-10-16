# list, array, collection is same
numbers = [34, 54, 67, 87, 98, 65, 4, 53, 2]

# get value by index, both pos and neg - it gives me 87 and 4
print(numbers[3], numbers[-3])

# make the array divisison - which will start from an index and will finish in another index. 
# here it means it will start from 2nd index and will finish the before of 6th index
print(numbers[2:6])

# do print partial and step . here it prints 67 98 4
# here 2 means skip the immediate next one and print the next after skip
print(numbers[2:7:2])

# negative proceed - here if you start from 1 and finish before 7 than -1 it will give an empty array as -1 means it will start and will go reverse side. so it will not get the 7th index of it goes reverse that is why it gives you empty array
print(numbers[1:7:-1])

# But if put it so than it will go revrsesd order
print(numbers[7:2:-1])

# in reverse order i can go stepwise
print(numbers[7:2:-2])

# if you want to print from a certain index to last, than you just need to insert start index
print(numbers[3:])

# i want to go from start to 5 - os it means if you do not give the end index it will go to the end. and if you do not give the start index it will by default start from start.
print(numbers[:5])

# another version if you just put : - no start and no end. than it will print all from start to end
print(numbers[:])

# reversed print the full array- no start, no end and just index for the step
print(numbers[::-1])