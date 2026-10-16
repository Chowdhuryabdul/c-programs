
// This is reverse recursion


#include<stdio.h>
void hello(int trackValue) /* it is a recursove function */
{
    
    // this is the condition to end the recursion
    if(trackValue == 0){ /* - here it is run untill 1 */
        return;
    }
    
    printf("%d\n", trackValue); /* it will print the value of trackvalue 
    
    variable from the main function */
    hello(trackValue - 1); /* -this is the increment and decrement part like loop. it will be deccrement as it reverse */
}


int main()
{   
    // this is one way to declare the variable and pass it to nnext function
    // int trackValue = 1; /* this is the variable to record the change and we have given value 1 which starts from 1. */
    // hello(trackValue);

    // we can also decalre inside the function as well
    hello(5); /* - this is the starting of recursion. to do start reverse recursing, here i will give the value where to end. as it supposed to run to 5 means will print the number until 5. so in case of reverse it will run from 5th */
    return 0;
}


/* Recurstion has the same three part-
-- starting 
    -- it starts from the main function, where we set he value of trackvalue is 1- we directly send value by calling function rather than value name.
    -- then we print the 1 in the upper hhello function 
    -- the we increase the value of parameter 1, which is 2 now. it will print 2 next calling.
-- then condition means how long will run 
-- increment or decrement */