numbers = [20, 30, 40, 50, 63, 73, 80, 91, 70, 45]

# print odd nmbrs
odds = []
for num in numbers:
    if num % 2 != 0 and num % 5 == 0:
        odds.append(num)
print(odds)     

# we can exactly this much shorter way - but it is not ussual and do not use this
odd_numbers = [num for num in numbers if num % 2 != 0 if num % 5 == 0]
print(odd_numbers)

# nested loop
players = ['sakib', 'musfiq', 'mustafiz']
ages = [38, 33, 32]

# normal nested Loop
age_comb = []
for player in players:
    print('player: ', player)
    for age in ages:
        # print(player, age)
        # by this we will get a list of item
        age_comb.append([player, age]) 
print(age_comb)

# i can write this in a comprehensive way
# by putting player and age in third bracket it makes a list
# by putting player and age in first bracket it makes a tupple

age_comb2 = [[player, age] for player in players for age in ages]
age_comb2 = [(player, age) for player in players for age in ages]
print(age_comb2)