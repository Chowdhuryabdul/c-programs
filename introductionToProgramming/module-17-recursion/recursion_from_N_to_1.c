#include<stdio.h>

void fun (int a[], int n, int i)
{
    // for(int i = n; i >= 0; i--){
    //     printf("%d", i);
    // }

    if(i == n){
        return;
    }

    fun(a, n, i+1); 
    printf("%d\n", a[i]);
}


int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    fun(a, n, 0 );
    return 0;
}