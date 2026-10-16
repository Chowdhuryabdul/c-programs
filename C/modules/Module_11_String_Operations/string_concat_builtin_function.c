#include<stdio.h>
#include<string.h>
int main()
{
   char a[102], b[102];
   scanf("%s %s", &a, &b);
  
//    Built in function to concate- // this is the built-in function to concat the string. in this function first i need write where we want to place and which wil be copied. here we want to store in a string and want to copy the b string
    strcat(a,b);
    printf("%s %s", a, b); 
    return 0;
}