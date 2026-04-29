#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    long long int sum = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > 0){
             sum = sum + abs(arr[i]);
        }
    }
    // take absolute value of sum
    if(sum < 0){
        sum = - sum;
    }
    printf("%lld", sum);
    return 0;
}