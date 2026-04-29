#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    
    // printf("%d", x);
    int x;
    scanf("%d", &x);
    // by default no item in the flag
    int flag = 0; /* the value of flag can be -10^9  -> 10^9 */
    for(int i = 0; i < n; i++){
         if(a[i] == x){
            printf("%d ", i);
           flag = 1; /* if the value is found then we have to change the value */
       break;
    }
}
    if(flag == 0){ /* if the value does not found then the of value of flag will be same  */
        printf("-1");
    } 
    return 0;
}