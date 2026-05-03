#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        char s[55];
        char t[55];
        scanf("%s %s", s, t);
        int s_len = strlen(s);
        int t_len = strlen(t);
        
        int i;
        for(i = 0; i < s_len && i < t_len;i++){
            printf("%c%c",s[i], t[i]);
        }

        if(i < s_len){
            for( ; i < s_len; i++){
                printf("%c", s[i]);
            }
        }

        if(i < t_len){
            for( ; i < t_len; i++){
                printf("%c", t[i]);
            }
        }
        printf("\n");

    }
    return 0;
}