#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1005];
    scanf("%s", ch);
    
    int length = strlen(ch);
    // printf("%d", length);
    int left = 0;
    int right = length - 1;
    int flag = 0;
    while(left< right){
        if(ch[left] != ch[right]){
            flag = 1; /* i have to change the falg value. whenever we find any change we have to change the falg value */
            break;
        }
        left ++;
        right --;
    }
    
     if(flag == 1){
        printf("NO");
     }else{
        printf("YES");
     }

    return 0;
}