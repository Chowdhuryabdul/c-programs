# print("Now i need money")
# input()

# taking input
input('Give me some money: ')

# storing input in a varibale
money = input('give me money: ')
print(money)

# write it with the f_strin
text= f"here is you money: {money}"
print(text)

# write with the koma
money = input('Give me some money: ')
print("here is your money", money)

first_moneey = input('kodom ali, dsot kichu taka de: ')
second_money = input('peyara begum, dosto kicho taka de: ')

# this one will show that it is str
print(type(first_moneey))
print('money i got from kodom', first_moneey, 'and from peyara', second_money)

total = first_moneey + second_money
print('total money i got: ', total)
# # it gives the the total is string type

# # type conversion or type casting
# # from strig to int
first_money_int = int(first_moneey)
second_money_int = int(second_money)
# print(type(first_money_int))
total = first_money_int + second_money_int
print('the total money is: ', total)

# from int to string
age = 37
age_str = str(age)
print(type(age_str))

# from string to decimla nmbr
price = "12.7"
price_decimal = float(price)
print(type(price_decimal))

# int to float

x = 10
y = float(x)
print(type(y))
print(y)

# float to int
a = 20.5
b = int(a)
print(b)