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

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
        
    }
    int space = 1;
    for (int i = n-1; i >= 1; i--)
    {
        for (int s = 1; s <= space; s++)
        {
            printf(" ");
        }
        
       for (int j = 1; j <= i; j++)
       {
        printf("%d", j);
       }
       printf("\n");
       space++;
    }
    return 0;
}