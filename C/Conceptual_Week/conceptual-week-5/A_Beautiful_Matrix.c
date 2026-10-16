#include<stdio.h>
int main()
{
    int a[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf ("%d", &a[i][j]);
        }
        
        // printf("\n");
    }
    int one_num = 1;
    int expected_r = 1;
    int expected_c = 2;
    for (int i = 0; i < 5; i++)
    {
           for (int j = 0; j < 5; j++)
        {
            if(one_num == a[i][j]){
                // printf ("%d %d", i ,j);
                // int row_swap = a[i] + expected_r;
                // int column_swap = a[j] - expected_c;
                // printf ("%d %d", row_swap, column_swap);
            }
           
        }
        printf("\n");
    }
    
    
/* 
     for (int j = 0; j < 5; j++)
        {
            printf ("%d ", j);
           
        } */
        
    return 0;
}