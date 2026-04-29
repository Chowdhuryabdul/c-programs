#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        // printf("%d ", a[i]);
        // ;
    }
    
    // printf("%d", x);
    int x;
    scanf("%d", &x);
    for(int i = 0; i < n; i++){
         if(a[i] == x){
            printf("%d ", i);

            // By returnn 0- it means if i get expected item ones it will stop immediately there and will print for once
            return 0;
        }
       
    }
     

            printf("-1");
   
    return 0;
}