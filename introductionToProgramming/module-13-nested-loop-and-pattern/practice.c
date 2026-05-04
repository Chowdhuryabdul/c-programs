#include<stdio.h>
int main()
{
    int n = 1;
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", n++);
        }
        printf("\n");
    }
    
    return 0;
}

/* summation of two element and same to x
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }

    int x;
    scanf("%d", &x);
    int flag = 0;
     for (int  k = 1; k <= n-1; k++){
    
            for(int j = k+1; j <= n; j++){
                // printf("%d %d\n", a[k], a[j]);
                if(a[k] + a[j] == x){
                    flag = 1;
                    printf("YES\n");
                    printf("%d %d %d %d", a[k], a[j]);
                // }else{
                //     printf("NO\n");
                }
            }
        }
        if(flag == 0){

            printf("NO\n");
        }
    
    
    return 0;
} */

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int k = 0; k < n-1; k++)
    {
        for (int j = k+1; j < n; j++)
        {
            if(a[k] < a[j]){
                int tmp = a[k];
                a[k] = a[j];
                a[j] = tmp;
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
    
    return 0;
}