#include<stdio.h>
#include<string.h>
int main()
{
    char a [101], b[102];
    scanf("%s %s",&a, &b);

        // this is the built-in function to copy the string. in this function first i need write where we want to place and which wil be copied. here we want to store in a string and want to copy the b string
        strcpy(a, b);

    printf("%s %s", a, b);
    return 0;
}