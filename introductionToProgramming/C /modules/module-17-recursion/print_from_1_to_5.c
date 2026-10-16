#include<stdio.h>



void hello(int trackValue) /* it is a recursove function */
{
    if(trackValue == 6){ /* - here it is run untill 5 */
        return;
    }
    
    printf("%d\n", trackValue); /* it will print the value of trackvalue variable from the main function */
    hello(trackValue + 1); /* i need to give the parameter of the hello function whhich is trackValue. if we run like this it will print only 1 as it is the value of varible to inifint times. but if we want to increase it like number 1,2,3,4... then we just need to add + 1 with parameter than it will be changed every time*/
    /* if we run like this in this way it will be infinit loop */
}


int main()
{   
    int trackValue = 1; /* this is the variable to record the change and we have given value 1 which starts from 1. */
    hello(trackValue);
    return 0;
}

// we will take a variable becuse the value will be changed 
// if i want run it untill 5, than i have to return it when it is 6th position. we can not stor in the 5th postition because it will not print the 5. so we have to stop and return before printing the 6. how to do this - we can take a condition and stop it in 6.