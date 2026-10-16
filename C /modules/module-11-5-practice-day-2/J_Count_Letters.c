#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    scanf("%s", s);

     int fre[26] = {0};
    for(int i = 0; i < strlen(s); i++){
        /* converts a charecter into value, if s[i] = 0 - it means a and a - a = 0. it will be 0 index. this value is from ascii value. */
       int value = s[i] - 'a';
       fre[value]++;
    }


    for(int i = 0; i < 26; i++){
       if(fre[i] > 0){
        printf("%c : %d\n",'a'+  i, fre[i]);
       }
    }
   
  
    return 0;
}