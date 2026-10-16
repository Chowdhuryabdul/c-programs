#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    
    // to track the star
    int star = 1;

    // to track the space
    int space = n-1;

    // to print the line
    for(int i = 1; i <= n; i++)
    {
        
        // to print the space before star, that is why we run this loop befor star loop
        for (int  k = 1; k <= space ; k++)
        {
            printf(" ");
        }
        
        
        // to print star
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        
        printf("\n");
        star+=2;
        space--;
    }
    return 0;
}