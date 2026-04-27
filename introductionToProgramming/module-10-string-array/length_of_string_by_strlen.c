#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    scanf("%s", &s);
    // we need to take this function. this s is array name
    int size = strlen(s);
    //  printf ("%d", size);


    // we can also print directly in the printf
    printf ("%d", strlen(s));
    return 0;
}