// i can add a number with a char and then find that char which i am looking for. for example char is A if i add 1 with the A the it will be B. if i add 3 then it will be C
#include<stdio.h>
int main()
{
    char ch = 'A';
    printf("%c", ch + 1); /* it prints B */
    printf("%c", ch + 2); /* it prints C */
    return 0;
}