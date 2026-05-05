// This will be no return, but with parameter
/* when we will not retrun anyting, then we have to write void in the variable type. which we write in the start of the function declation. here we have written int. Now we will wirte void instead of int as we will not retrun anything. */
// here as we not return anyting in the main funciton then there will be noting to printf. so we can bring printf inside the sum function and print the result. as printf can be called from any place.
// Since we are not returning anyting in the main function, then we do not need that variable to store the retun

// another important thing is that we can return to main function anytime from the new function. if we write return type in sum it will not execute anythhing after this and will return to the main function. and after hit return will stop working same as break in the loop. it will go back to the main function immediately.

#include<stdio.h>

// int sum(a, b) - this is with return type
void sum(int a, int b) /* - this is without return type. if we wirte here int then we have to retutn int value. */

{
    int operation = a+b;
    printf("%d", operation);
}




int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    // int value = sum(a, b); it is in case we got return from sum function to print, since we will not return anything from there so we have noting to store.

    sum(a, b);  /* Rather we can just call the funtion like this */
    
    return 0;
}