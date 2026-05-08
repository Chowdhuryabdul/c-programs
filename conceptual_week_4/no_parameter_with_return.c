#include<stdio.h>

int fun(){
    int m, n;
    scanf("%d %d", &m, &n);
    // printf("1000");
    int add = m + n;
    return add;
}



int main()
{
    
    int result = fun();
    printf("%d", result);
    return 0;
}