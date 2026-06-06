#include<stdio.h>

int main()
{
    int a[3] = {10, 20, 30};
    int max = 0;
    for (int i = 0; i < 3; i++)
    {
        if( a[i] > max){
            max = a[i];
        }
    }
    printf("%d", max);
    
    return 0;
}