/* #include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] > max){
            max = a[i];
        }
    }
    printf("%d", max);
    
    
    return 0;
} */


#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int rows = 6;

    int temp = 1;

    while(temp < n)
    {
        rows++;
        temp += 2;
    }

    int star = 1;
    int space = rows - 1;

    // upper tree
    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for(int k = 1; k <= star; k++)
        {
            printf("*");
        }

        printf("\n");

        star += 2;
        space--;
    }

    // trunk
    int trunk_space = rows - (n / 2) - 1;

    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= trunk_space; j++)
        {
            printf(" ");
        }

        for(int k = 1; k <= n; k++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}