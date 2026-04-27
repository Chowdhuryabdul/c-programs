#include<stdio.h>
#include<string.h>
int main()
{
    char s[100005];
    scanf("%s", s);
    int len_s = strlen(s);
    // printf("%d", len_s);
    int consonent = 0;
    for(int i = 0; i < len_s; i++){
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'o' && s[i] != 'i' && s[i] != 'u'){
            consonent++;
        }
    }
    printf("%d", consonent);
    return 0;
}