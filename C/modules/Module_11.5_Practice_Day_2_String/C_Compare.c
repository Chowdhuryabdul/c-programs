#include<stdio.h>
#include<string.h>
int main()
{
    int a[101], b[101];
    scanf("%s %s", &a, &b);
    // printf("%s %s", a, b);
    int value = strcmp(a, b);
    if(value < 0){
        printf("%s",a);
    }else if(value == 0){
        printf("%s", a);
    }else if(value > 0){
        printf("%s", b);
    }
    return 0;
}