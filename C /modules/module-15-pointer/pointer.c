#include<stdio.h>
int main()
{
    int x = 10;

    // how to see the location address where store the variable. for example i can see the hexa address of variable

    printf("%d\n", x);  

    // to see the address i need to put & sign- to see the address, the format specifiere is p
    printf("%p\n", &x);  

    // if we nned to work with this address. we have to take new type of variable which is pointer variable
    // pointer variable declaration
    int* ptr;

    // now i want to store the address of x variable in this pointer
    ptr = &x;

    // To see the address of x is properly printed
    printf("%p\n", ptr);  /* this is the hexa code of x 0x16d036e78 */
    
    // Now we can see the address of pointer
    printf("%p", &ptr);   /* - this is the hexa code of address of pointer */

    return 0;
}