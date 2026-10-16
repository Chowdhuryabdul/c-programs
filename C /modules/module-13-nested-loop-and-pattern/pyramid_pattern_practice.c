/* #include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    // int star = 1;
    int star = n;
    int space = 0;
    for (int i = 1; i <= n; i++)
    {

        for (int k = 1; k <= space; k++)
        {
            printf(" ");
        }

        for (int j = star; j >= 0; j--)
        {
            printf("*");
        }

        printf("\n");
        space++;
        star -= 2;
    }

    return 0;
} */



// Normal pyramid patterne
/* #include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n-1;
    for (int i = 0; i < n; i++)
    {
        
        for (int k = 0; k < space; k++)
        {
            printf(" ");
        }
        
        
        for (int i = 0; i < star; i++)
        {
            printf("*");
        }
        
        printf("\n");
        star+=2;
        space--;
    }
    
    return 0;
} */

// reverse pyramid pattern

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 2*n-1;
    // printf("%d", star);
    int space = 0;
    for (int i = 1; i <= n; i++)
    {
         
        for (int k = 1; k <= space; k++)
        {
            printf(" ");
        }
        
        
        for (int j = star; j >= 1; j--)
        {
           printf("*");
        }
        
        
        printf("\n");
        star-=2;
        space++;
    }
    
    return 0;
}