#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while(n != EOF){
        if(n == 2030){
        printf("correct");
        break;
    }
    else{
        printf("wrong");
    }
    return 0;
}}