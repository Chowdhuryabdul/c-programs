# to ge the maximum numbers in a normal variables
highest = max(12, 456, 67, 24, 67)
print(highest)

# to get the max number from the array
highest =max( [12, 134, 56, 78, 789])
print(highest)

# to get the samllest nmbr
smallest = min(12, 45, 5, 67)
print(smallest)
smallest = min([12, 3, 45, 67, -7])
print(smallest)

# to get the number of the element of the array
count_element = len([12, 34, 5, 6])
print(count_element)

# use of range
# for num in range(1, 10):
    # print(num)

# use of sum - it usually give the sum of all elements in the array
total = sum([12, 23, 45, 67])
print(total)

# use of all and any
# any uses in case for example, if i want to find the only odd number from all the numbers. another way is that at least one condition is true
# all uses to find all the numbers which are even - all conditions must be true

age = 34
salary = 30000
experiencce = 40

result = all ([ age >= 18, salary >= 25000, experiencce >= 20])
print(result)

def is_qualified(age, salary, experience):
    return all([age >= 18, salary >= 25000, experiencce >= 20])
result = is_qualified(30, 50000, 35)
print(result)

def is_qualified(age, salary, experience):
    if all([age >= 18, salary >= 20000, experiencce >= 4]):
        print("you are qualified")
    else:
        print("You are Not qualified")

is_qualified(20, 40000, 50)

# use of any
def can_travel(car, bike, buss):
    return any([car, bike, buss])
result = can_travel(False, True, False)
print(result)

def check_names(name1, name2, name3):
    return any([name1, name2, name3])
print(check_names("", "", "Abdul"))