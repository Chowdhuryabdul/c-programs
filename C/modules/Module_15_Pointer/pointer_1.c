#include<stdio.h>
int main()
{
    int x = 10; /* - this will occupy 4 byte in a memory and will take a address. */
    int* p = &x; /* we take a pointer variable where we store the address of x variable. this pointer variable will take a place in memory which will have a address name */
    printf("%p\n", &x); /* - printing the address of x */
    printf("%p\n", p); /* printing the value of pointer variable */
    printf("%p\n", &p); /* printing the address of pointer variable */

    *p = 20; /* derefrencing the pointer variable. it means it will go to that address which is stored in the pointer variable. now we store the value 20 */
    printf("%d\n", x); /* printing the present value of x which is 20 */
    printf("%d\n", *p); /* dereference value of pointer */

    return 0;
}