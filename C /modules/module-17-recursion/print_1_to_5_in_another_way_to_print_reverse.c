#include<stdio.h>



void hello(int trackValue) /* it is a recursove function */
{
    if(trackValue == 5){ /* - here it is run untill 5 */
        return;
    }
    
    hello(trackValue + 1); 
    printf("%d\n", trackValue); 
}


int main()
{   
    // int trackValue = 1; 
    // hello(trackValue);
    hello(1);
    return 0;
}


/* how it works--
-- first hello fucntion will be called from the main function and the parameter value is 1. will check the condition and is false. then it will go to the insdie-hello function 
--- Now value will be 2. will check condition wchich will be false and will call the hello funciton again and now the value will increase by 1 and will be 3
--- Now value will be 3. will check condition wchich will be false and will call the hello funciton again and now the value will increase by 1 and will be 4
--- Now value will be 4. will check condition wchich will be false and will call the hello funciton again and now the value will increase by 1 and will be 5
-- Now the value is 5 and will call function again and check the condition, now condition is will be trun. and will return to the line where it is called and print the which is 4. after printing then there is no code and function will go that line where it is called  and print the 3. this is the way it will print 1 finally and finish the function.  */
