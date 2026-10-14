# i can send parameter normally or i can send it by name
# take parameters with serial or sequence
def full_name(first, last):

    # f-string
    name = f' full name is: {first} {last}'
    return name

# take parameters in order (serial wise)
name = full_name('Alu', 'kadu')
print(name)



# take parameters without serial
def full_name(first, last):
    name = f'full name is: {first} {last}'
    return name

# take parametes without order (without serial)
# so it means i do not need to maintain the serial here
name = full_name(last = 'kodu', first = 'alu')
print(name)

# key parameters - those parameteres is set by name

# def famous_name(first, last, title, additional): i can here cancel title and use *args
def famous_name(first, last, **additional):
    name = f' {first} {last}'
    # here it will give all the additional which is not defined in the parameters. in the arguments first and last defineds, but in the parameters we have send many. rest of them will come to the additional
    print(additional) 
    # if i want to get specific one from addiional
    print(additional['title'])

    # for loop to get key and value together from *additional
    for key, value in additional.items():
        print(key, value)
    return name
name = famous_name(first = 'taher', last = 'Ali', title= 'Hujur', additional= 'taherii', title_2 = 'mawlana', title_3 = 'saokh', last_2 = 'kolu')
print(name)

# i can do so
# def function_name (num1, num2, *args, *kargs)

# return multiple things from an array
# i can return many things from function in python. we can get the returnn as tuffle which same as array
def a_lot(num1, num2):
    sum = num1 + num2
    mult = num1 + num2
    remain = num1 - num2
    # it has sends as tuffle
    # return sum, mult, remain
    # i can also send it as list
    return [sum, mult, remain]
result = a_lot(10, 20)
print(result)