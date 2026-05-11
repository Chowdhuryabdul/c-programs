#include<stdio.h>
int main()
{
    // input taking
    int r, c;
    scanf("%d %d", &r, &c);
    
    // array decaration
    int a[r][c];


    /* we scan the first index of 2d array in manula way */
   /*  scanf("%d", &a[0][0]);
    scanf("%d", &a[0][1]);
    scanf("%d", &a[0][2]);
    scanf("%d", &a[1][0]);
    scanf("%d", &a[1][1]);
    scanf("%d", &a[1][2]);
    scanf("%d", &a[2][0]);
    scanf("%d", &a[2][1]);
    scanf("%d", &a[2][2]); */

    // printf all the inputs in a manual way
   /*  printf("%d ", a[0][0]);
    printf("%d ", a[0][1]);
    printf("%d ", a[0][2]);
    printf("%d ", a[1][0]);
    printf("%d ", a[1][1]);
    printf("%d ", a[1][2]);
    printf("%d ", a[2][0]);
    printf("%d ", a[2][1]);
    printf("%d ", a[2][2]); */

    
    // take input the value of index with nested-loop

    // this is for the row
    for (int i = 0; i < r; i++)
    {
        
        // this is for the col
        for (int j = 0; j < c; j++)
        {
            // here i is row and j is column-this is print index
            // printf("%d %d\n", i, j);
            
            // to take input
            scanf("%d", &a[i][j]);

        }
    }
    
    
    // this is to print the value of index by nestted loop
    // this is for the row
    for (int i = 0; i < r; i++)
    {
        
        // this is for the col
        for (int j = 0; j < c; j++)
        {
            // here i is row and j is column-this is print index
            // printf("%d %d\n", i, j);
            
            // to take input
            printf("%d ", a[i][j]);

        }
        printf("\n");        
    }

    
    
    return 0;
}

/* it is called 3 by 3 2d array. which menas a array which has 3 rows and 3 columns */