#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int a[n];
    
    
    for(int i = 0; i < n; i++){
        scanf("%lld", &a[i]);
    }
   long long int sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
    }
    // how to remove the negative sign and make the value absolute
    if(sum < 0){
        // there are several way to do this
        sum = -sum; /* here minmus and minus which will delete the minnus sign */
        /* sum =* -1 we can multipy sum with -1 whhich will remove the minus sign */
    }
    printf("%lld",sum);
    return 0;
}