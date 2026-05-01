#include<stdio.h>
#include<string.h>
int main()
{
    char a[101];
    char b[101];
    scanf("%s %s", &a, &b);
    // printf("%s %s\n", a, b);
    int len_b = strlen(b);
    strcpy(a, b);
    // for(int i = 0; i <= len_b; i++){
    //     a[i] = b[i];
    // }
    printf("%s\n%s", a, b);
    return 0;
}