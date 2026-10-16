#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }
 int sum_primary_diagonal = 0;
 int sum_secondary_diagonal = 0;
    // find primary diagonal
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i == j){
                // printf("%d ", a[i][j]);
                sum_primary_diagonal = sum_primary_diagonal + a[i][j];                 
            }
          /*   why we do not if else laddre here because the center element in primary and secondary diagonal is same. so the result of the first part of if is true then it will not come the second part. so i need to have seperate if condition */
             if(i + j == n - 1){
                sum_secondary_diagonal =sum_secondary_diagonal + a[i][j];
                
            }
        }
        
    }
    // printf("%d ", sum_primary_diagonal);

    // printf("\n");
    // find secondary diagonal- i + j = n -1

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if(i + j == n - 1){
    //             sum_secondary_diagonal =sum_secondary_diagonal + a[i][j];
                
    //         }
    //     }
    //     // printf("\n");
    // }
    
    int total = abs(sum_primary_diagonal - sum_secondary_diagonal);
    printf("%d", total);
    

    return 0;
}