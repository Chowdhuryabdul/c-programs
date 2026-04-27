#include<stdio.h>
int main()
{   int n = 66;
    char ch = 'B';
    printf("%d", ch); /* - to find the charecter ascii value */
    printf("%c", n); /* here it will print B - because 66 is the ascii value of B */
    return 0;
}

// we know if there is a number computer store it by 1, 0 which is binary number. but carecter which is not integer how computer sotre it. charecter is stored by a value which is called ascii value. if want to check the charecter value then i need to write like this - printf("%d", ch)- then it will print the charecter asccii value.
// we can also print the ascii value of a char - by printf("%c", n);