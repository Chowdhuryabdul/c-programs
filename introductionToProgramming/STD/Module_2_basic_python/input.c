#include<stdio.h>
int main()
{
    int a;
    float b;
    char c;
    // why i need to give the reference sign as we will change the value. without assgininng the value there is grabage value already stored in the memory. to change that i need to use reference sign- &
    scanf("%d %f %c", &a, &b, &c);
    printf("%d %f %c", a, b, c);
}