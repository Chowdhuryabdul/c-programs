#include<stdio.h>
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

        // to print specific column
    }
        int specific_column;
        scanf("%d", &specific_column);

        for (int i = 0; i < r; i++)
        {
            printf("%d\n", a[i][specific_column]);
        }
        
    return 0;
}

/* -- here we need to run the loop on the row because column is fixed and row is changed */