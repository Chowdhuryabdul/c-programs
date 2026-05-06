#include<stdio.h>

int capital_to_small(char ch){
    int conversion = (int)ch + 32;
    return conversion;
}

int main()
{
     int ch;
    scanf("%c", &ch);
    int result = capital_to_small(ch);
    printf("%c", result);
    return 0;
}