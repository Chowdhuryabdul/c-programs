#include<stdio.h>
#include<string.h>
#include <ctype.h>
int main()
{
    char c [100];
    scanf("%s", c);

 
    int len = strlen(c);
   
    for (int i = 0; i < len; i++)
    {
        c[i] = tolower(c[i]);
    }
    
   
    int flag = 1;

    for(int i = 0, j = len-1; i < j; i++, j--){
     /* int  tmp = c[i];
        c[i] = c[j];
        c[j] = tmp; */

        if(c[i] != c[j]){
            flag = 0;
            break;
        }
    }

    
       if (flag == 1){
        printf("YES\n");
        printf("%s", c);
       }else{
        printf("NO\n");
        printf("%s", c);
       }
    
    // printf("%c", tmp);
    
    
    return 0;
}