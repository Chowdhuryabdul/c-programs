// we can consider digit as number and also a charecter
// if we consider digit as charecter then we have to take them inside a single qutation

#include<stdio.h>
int main()
{
    char ch;
  scanf("%c", &ch);
    
    if(ch >= '0' && ch <= '9'){
        printf("IS DIGIT");
    }else{
        printf("ALPHA\n");
        if(ch >= 'a' && ch<= 'z' ){
            printf("IS SMALL");
        }else{
            printf("IS CAPITAL");
        }
    }
    return 0;
}