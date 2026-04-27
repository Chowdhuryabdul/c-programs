#include<stdio.h>
int main()
{
    char s[101];
    scanf("%s", &s);
    // we declare this variable to count the number of variable
    int count = 0;
    // loop to count
    // this condition - s[i] != '\0'; means whenever we will get the null \0 charecter then we will stop there. e will runn the loop unitl the value of i is not equal to null charecter
    // s of i s[i] means the charecter of string
    for(int i = 0; s[i]!='\0'; i++ ){
        count++;
    }
    printf("%d", count);
    return 0;
}