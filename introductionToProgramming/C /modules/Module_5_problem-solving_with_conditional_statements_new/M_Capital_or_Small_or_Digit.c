#include<stdio.h>
int main()
{
    char x;
    scanf ("%c", &x);
    if(x >= 'A' && x <= 'Z'){
        printf("ALPHA IS CAPITAL");
    }else if(x >= 'a' && x <= 'z'){
        printf("ALPHA IS small");
    }else if(x >= '0' && x <= '9'){
         printf("Digit");
    }
}