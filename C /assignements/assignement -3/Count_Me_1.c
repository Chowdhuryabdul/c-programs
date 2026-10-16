#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int countEven = 0, countOdd = 0;
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){  
        countEven++;
        
        }
       else if(a[i] % 3 == 0){ 
        countOdd++;  
        }
    }
    printf("%d %d", countEven, countOdd);

    return 0;
}