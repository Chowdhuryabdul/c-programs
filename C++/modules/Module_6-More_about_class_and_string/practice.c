#include<stdio.h>
  #include<string.h>
int main()
{
   char s[101];
   scanf("%s", s);
   int fre[26] = {0};

  for (int i = 0; i < strlen(s); i++)
  {
    int value = s[i] - 'a';
    fre[value]++;
  }
  
   for (int i = 0; i < 26; i++)
   {
    if(fre[i] > 0){
        printf("%c : %d\n", 'a' + i, fre[i]);
    }
   }
   
  


    return 0;
}