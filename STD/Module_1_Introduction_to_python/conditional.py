a = 2
if a > 5:
    print('5 er beshi')
elif a == 3:
    print('olpo boro')
else: 
    print('choto choto raate lombi hoye jai')

boss = False
# if boss is True:
#     print('tel er bakso astesi boss re tell dio')
# else:
#     print('lunch er pore asen')

if boss is not True:
    print('lunch er por ashen')
else:
    print('tel er bakso astesi boss re tell dio')


# nested condition'
coin = 'head'
if boss == True:
    print('boss you are joss')
    if coin == 'tail':
        print('batting')
    else:
        print('bowling')
        if 5 > 2 or boss != True:
            print('do something')
        if 8 % 2 == 0 and 5 % 2 == 1:
            print('even 8 is an even number')
else:
    print('you are loss not a boss')