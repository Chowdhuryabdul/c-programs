
# default parameter -> num3 = 0
def sum(num1, num2, num3 = 0):
    result = num1 + num2 + num3
    return result

total = sum(100, 200, 400)
print('total: ', total)

# we have sent two parameters, but num3 is optional here. we have already sett its value. but if i place third value than it will take the given value first
# here num3 = 0 - it menas there is no third parameter than we can set it there

# Mulitple arguments
# args
# if i want to put unlimited parameters than i use args. here by * i have can take as many as parameters. it usually gets as variable number args
# here i can fix some as fixed by num1, num2 and rest of them will in *numbers
# def all_sum(*numbers):
def all_sum(num1, num2, *numbers):
    print(numbers)
    sum = 0
    for num in numbers:
        print(num)
        sum = sum + num
    return sum

# i can set it as tupple or array. we can consider it as array.
# we can take as many as parameters
total = all_sum(45, 56, 11, 12, 34)
print('all sum: ', total)


def do_a_lot(*args):
    print(args)
