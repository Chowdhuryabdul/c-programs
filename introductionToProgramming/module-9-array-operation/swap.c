#include<stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    // in this formula to swap value, we get 20 for both and lost the real value of a which is 10. so we need to keep somwhere the value of a before doing this operaiton. so we need to take a temorary variable to keep the original value of .
    int tmp = a; /* this is temporary varaiable to store the value of a */
    a = b; /* here the value of a is 20; */
    /* b = a; here value of a is also 20 will be assigned to b, but the value of b should be original value of a which is stored inn temp which can be assigend to b. so we can write-- */
    b = tmp;
    printf("A = %d\nB = %d", a, b);
    return 0;
}