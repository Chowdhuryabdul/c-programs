# this is global variable - you can not change the value of this inside the function
balance = 3000

def buy_things(item, price):
    # this is local variable
    # balance = 500

    # you can use the global variable without using the global key word, but if you want to modify the global variable than you have to use the global keyword
    # want to use the global variable
    global balance
    print(f'previous balance value', balance)
    balance = balance - price
    print (f'balance after buying {item}', balance)
buy_things('sunglass', 1000)


""" 
 print(f'previous balance value', balance)
    # balance = balance - price
    print (f'balance after buying {item}', balance) 
    in this condition it shows the balance for the both up and down, but if i activate the balance = balance - price. in this case it says this balance does not have value. 

    two ways i can use the global variable inside the function--
    1. i can send the global variable as parameter
    2. i can use gloabl keyword

     global balance
        print(f'previous balance value', balance)
        balance = balance - price
        print (f'balance after buying {item}', balance)
    buy_things('sunglass', 1000)

    now it works as i have used it by global
    
    """