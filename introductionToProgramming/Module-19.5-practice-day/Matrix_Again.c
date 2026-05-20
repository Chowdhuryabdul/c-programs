#include <stdio.h>
#include <stdbool.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

   // print row
   int specific_row =r - 1 ;
    for (int i = 0; i < c; i++)
    {  
        printf("%d ",a[specific_row][i]);
    }
    printf("\n");

    // print column
    int specific_col = c - 1;
    for (int j = 0; j < r; j++)
    {
        printf("%d ", a[j][specific_col]);
    }
    return 0;
}