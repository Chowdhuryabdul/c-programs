#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);
    
    while(t--){
        char s[10005];
        scanf("%s", s);
        int len_s = strlen(s);
        int countCapital = 0, countSmall = 0, countDigit = 0;
 
       for(int i = 0; i < len_s; i++){
      
         if(s[i] >= 'A' && s[i] <= 'Z' ){
            countCapital++;
        }else if(s[i] >= 'a' && s[i] <= 'z' ){
            countSmall++;
        }else if(s[i] >= '0' && s[i] <= '9'){
            countDigit++;
        }
    }
    printf("%d %d %d\n",countCapital, countSmall, countDigit  );
   
    }
    return 0;
}