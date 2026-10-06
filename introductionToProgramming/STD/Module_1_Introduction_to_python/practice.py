# first_number = input('give me input: ')
# sec_number = input('secnond number: ')
# third_number = input('third_number: ')
# # print(first_number, sec_number, third_number)

# # print(type(first_number))

# first_number_int = int(first_number)
# sec_number_int = int(sec_number)
# third_number_int = int(third_number)
# print(first_number_int + sec_number_int + third_number_int)

largest = 0
# if first_number_int > largest:
#     print('first number is the largest number', first_number_int)
# elif sec_number_int > largest:
#     print('second number is the largest number', sec_number_int)
# else:
#     print('thrid number is largest', third_number_int)

# numbers = [ first_number_int, sec_number_int, third_number_int]
# for number in numbers:
#     # print(number)
#     if(first_number_int > largest):
#         largest = first_number_int
#     elif sec_number_int > largest:
#         largest = sec_number_int
#     else:
#         largest = third_number_int
# print(largest)

# for number in numbers:
#     if number > largest:
#         largest = number
# print('the largest numb')

for num in range(38, 68):
    if num % 2 != 0:
        print(num)