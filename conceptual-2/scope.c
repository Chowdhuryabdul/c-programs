#include<stdio.h>

int y = 900;
int main()
{
    int x = 19; /* this is local scope */
    printf("%d\n", x);

    if(x > 5)
    {
        int b = 99; /* this is local scope */
        printf("%d %d\n", x, b);
    }

  /* printf("%d", b)  here i can not access this b from outside the if block */

  printf("%d", y); /* here i can call this from anywhere of the block- this is global function......*/
    return 0;
}