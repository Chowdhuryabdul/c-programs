// if i want to cut the digit from first then i need to do modulus

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    // find the last digit 0f 4679 number
    int last_digit = n % 10;
    // find the last two digit 0f 4679 number
    int last_two_digit = n % 100;
    // printf("%d", last_two_digit);
     // find the last three digit 0f 4679 number
    int last_three_digit = n % 1000;
    printf("%d", last_three_digit);
    return 0;
}