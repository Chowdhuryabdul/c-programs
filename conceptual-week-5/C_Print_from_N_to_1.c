#include<stdio.h>

void print_1_5(int n)
{
    // one way

    if(n == 0) return;

   /*  There is one issue in the question said that we can not print space after 1. but if we write "%d ", it will print one space after last digit. so we can write a condition like this- */
    if(n != 1){
        
        printf("%d ", n);
    }else{
        printf("%d", n);
    }
    
    print_1_5(n-1);

    
}

int main()
{
    int n;
    scanf("%d", &n);
    // int i = 1;
    print_1_5(n);
    return 0;
}