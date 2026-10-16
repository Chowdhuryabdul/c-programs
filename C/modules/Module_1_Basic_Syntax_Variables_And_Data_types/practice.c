// 1. explain why we need long long int data type?
// we need long long int data type for severel reasons-
// A. a integer can keep 4 bytes or 332 bits space in memory which is equivalent to 10^9. it means 1000000000
// B. if we want to keep bigger integer than that data type we need to use this long long int method.
// c. if we do not use this method but try to work out with the bigger number it will print wrong message or will not work properly.

// 2. 
// A. variable names must be in small or capital letter as well as can be used underscore (_) - such as rahim, Rahim, _rahim 
// B. names can consists of digit and letter, but it does not accept space in between. such as rahim123, rahim_123, but rahim 123 is not correct, due to space inn between them.
// c. Name can not be consists of C programming key word names in the variable name, such as int, float, if and others

#include<stdio.h>

int main()
{
    int a;
    int b;
    scanf("%d %d", &a, &b);
    printf("%d %d", b, a);
    return 0;
}