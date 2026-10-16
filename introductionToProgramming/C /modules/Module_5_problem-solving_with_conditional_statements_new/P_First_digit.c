#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    
    // int last_digit = n % 10;
    // int remove = n / 1000;
     int first_digit = n / 1000;




    printf("%d", first_digit);
}