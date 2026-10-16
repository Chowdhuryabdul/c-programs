#include<stdio.h>


/*void fun(char s[], int n)  we do not need to send this size as we can take it by strlen function. */

void fun(char s[])
{
    printf("%s", s);
}



int main()
{
    char s[10];
    scanf("%s", &s);
    fun(s);
    return 0;
}


/* why we not need to give the & sign in a string name?
--> string is type of array 
--> as we know that name of the array store the address of the 0 index in its name. so we do not need 
--> string name is a name of array and the name of the array is the address of 0th index of array. so we do not need to & sign */