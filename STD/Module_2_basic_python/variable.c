
#include<stdio.h>
int main()
{
    int num = 20;
    printf("%d\n", num);

    float num1 = 23.5; // automatic he prints 6 digit after point
    printf("%f\n", num1);
    // control the numbr after point
    printf("%.2f\n", num1);
    char a = 'd';
    printf("%c\n", a);
}