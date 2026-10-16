#include<stdio.h>


void hello()
{
    printf("Hello\n");
    hello();
}


int main()
{   
    printf("hi\n");
    hello();
    return 0;
}


// if any function call itseld it is called recursive function. if hello function call himself which is called recursive. And the whole process to call itself called recursion.
/* how the recursion happend in the code?
c compiler first go to the main function will print hi, than he will see the hello function and will go to the hello function. 
hello function will take a place a stack memory and it will take a place in the stack memory as well. 
after printing hello it will see the hello function, and take a place in the stack memory and call stack. it will run until stack memory is full. when stack memroy is full it will stop to run and it is called stack overflow. */

// why we need to learn this as it gives infinit run?
// actually we can control it based on our demand same as loop