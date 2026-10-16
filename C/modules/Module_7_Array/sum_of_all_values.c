#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    
    // this is variable to store the sum
    int sum = 0;
    for(int i = 0; i < n; i++){
    //  sum = sum + a[i];
    sum += a[i];
        // printf("%d ",a[i]);
    }printf("%d", sum);
    return 0;
}