#include<stdio.h>
int main()
{
    char c;
    scanf("%c", &c);
    if(c == 'z'){
        printf("a");
    }else{

        char next = c + 1;
        printf("%c", next);
    }
}