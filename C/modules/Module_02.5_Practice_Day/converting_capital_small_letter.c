// if i want to convert from capital letter to small letter then i need to subtract 32 with the ascii value of the letter- if i add 
#include<stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
   if(ch >= 'a' && ch <= 'z'){ /* here it shows how to wrtie a condition which will inclued all the small letter */
    ch = ch - 32; /* - if we deduct 32 from small then it will be capital */
    printf("%c", ch);
   }else{
    ch = ch + 32; /* - if we add 32 with capital then it will be small */
    printf("%c", ch);
   }
    // printf("%d", ch);
    return 0;
}