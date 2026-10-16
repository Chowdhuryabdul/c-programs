#include<stdio.h>
int main()
{
    int a = 10;
    int b = 5;
    int sum = a + b;
    printf("summation = %d\n",sum);
    int sub = a-b;
    printf("subtraction = %d\n", sub);
    int mul = a * b;
    printf("multiplication = %d\n", mul);
    // int a = 15;
    // int b = 2;

    // here i want to get the actual result with remain after division 
    float a = 15;
    int b = 2;
    float div = a / b;
    printf("division = %.2f", div); /* the naswer suppused to be 7.5 but it prints only 7 */
    
    return 0;
}