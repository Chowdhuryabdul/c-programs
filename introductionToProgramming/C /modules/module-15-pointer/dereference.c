#include<stdio.h>
int main()
{
    int x = 10;

    printf("%d\n", x);  


    printf("%p\n", &x);  /* print the address */
   
    int* ptr;
    ptr = &x;  /* kkep the address of x in pointer variable */

        // To change or dereference the value of x variable by pointer
        *ptr = 200;
        printf("%d", x);

    // printf("%p\n", ptr); 
    // printf("%p\n", &ptr);  


    // to print the value of that varible by the pointer and address of that variable- here we need to use %d and pls *sign before pointer variable in printf

    printf("%d\n", *ptr);
    return 0;
}