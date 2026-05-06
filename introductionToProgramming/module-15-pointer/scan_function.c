#include<stdio.h>

void scanf()
{
    // code how to take input
}


int main()
{
    int x;
    scanf("%d", &x);
    printf("%d", x);
    return 0;
}

/* why we use reference sign in the scanf funciton?
And why not in pritf?

scanf is a functio which is writte in the header file. as it does not return anything then it is in void format
as we know by pass by value the x is is the main funciton and x in the declared scanf function is different. so whenever value of varabile is changed it is impossibel to get from the main function. 
when we give the & sign and send with this reference sign then whatever value is changed in function, it is possible to get from the main function. for example scanf can take different value from the input. which is possible to get from the main function with reference sign 

But why we do not use the reference sign in the print function? the reason is that we are not changing anything in the print function rather we just print the value.
*/