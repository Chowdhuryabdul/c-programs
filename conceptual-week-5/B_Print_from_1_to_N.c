#include<stdio.h>

void print_1_5(int n)
{
    // one way

   /*  if(i == n) return;

    printf("%d", i);
    print_1_5(n, i+1); */

    // another way

    /* if(i > n) return;
     printf("%d\n", i);
    print_1_5(n, i+1); */

   /*  another way
   this is a magic way to. it proves how recursion function travel from the line to the line it is called from-- */

    if(n == 0) return;

    print_1_5(n-1);
    printf("%d\n", n);
}

int main()
{
    int n;
    scanf("%d", &n);
    // int i = 1;
    print_1_5(n);
    return 0;
}