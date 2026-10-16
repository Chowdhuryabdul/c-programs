#include<stdio.h>
int main()
{
    // this is the normal way of string initialization
    // char s[5] = {'p','I', 'A', 'S', '\n'};
    // char s[5] = {'P','I', 'A', 'S'};

    // but there is super power way to initialize the string. good thing is we can declare string with the space
    // char s[5] = "PIAS";
    char s[30] = "MAHMUD HASAN PIAS";
    printf("%s", s);
    return 0;
}