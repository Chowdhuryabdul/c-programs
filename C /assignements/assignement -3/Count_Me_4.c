#include<stdio.h>
#include<string.h>
int main()
{
    char s[10005];
    scanf("%s", s);
  
    int len_s = strlen(s);
    int fre[26] = {0};
    for(int i = 0; i < len_s; i++){
        //   printf("%c ", s[i]);
        int value = s[i] - 'a';
        fre[value]++;
    }
    for(int i = 0; i< 26; i++){
        if(fre[i] > 0){
            printf("%c - %d\n", 'a' + i, fre[i]);
        }
    }
    return 0;
}