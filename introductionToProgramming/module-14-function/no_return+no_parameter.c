// This is without return and without parameter

#include<stdio.h>

void sum(){
    
    // we will bring the input from main function to here
    int a, b;
    scanf("%d %d", &a, &b);
    
    // as there is no return, so we will print from here
    int operation = a+ b;
    printf("%d", operation);
}



int main()
{
    
    sum();
    return 0;
}