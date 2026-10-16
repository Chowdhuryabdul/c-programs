#include<stdio.h>

void sum(int a, int b)
{
    int sum = a + b;
    printf("%d", sum);
}


int main()
{
   int a =10, b = 30;
   sum(a, b);

    
    return 0;
}