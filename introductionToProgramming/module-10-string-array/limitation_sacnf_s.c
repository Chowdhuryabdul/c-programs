#include<stdio.h>
int main()
{
    char s[20];
    scanf("%s", &s);
    printf("%s", s);
    return 0;
}

// there is another issue regarding %s. in this case whenever it gets space it will stop printing. so it just print mahmud. so the limitationn of this it can not take input with space