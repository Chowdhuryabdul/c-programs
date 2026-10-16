// to print 2_d array

/* #include<stdio.h>
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
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
           printf("%d ", a[i][j]);
        }
        printf("\n");

    }

    return 0;
} */

// print a specific row

/* #include<stdio.h>
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

    int specific_row;
    scanf("%d", &specific_row);
    for (int i = 0; i < c; i++)
    {

        printf("%d ",a[specific_row][i]);

    }

    int specific_col;
    scanf("%d", &specific_col);
    for (int i = 0; i < r; i++)
    {
        printf("%d ", a[i][specific_col]);
    }



    return 0;
} */

// cheking row matrix

// #include<stdio.h>
// int main()
// {
//     int r, c;
//     scanf("%d %d", &r, &c);
//     int a[r][c];
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }

//     }
//     if(r == 1){
//         printf("it is row matrix");
//     }

//     return 0;
// }

// cheking square matrix

// #include <stdio.h>
// int main()
// {
//     int r, c;
//     scanf("%d %d", &r, &c);
//     int a[r][c];

//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     if (r == c)
//     {
//         printf("it is square matrix");
//     }
//     else
//     {
//         printf("it is not square matrix");
//     }

//     return 0;
// }


// checing primary diagonal

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

    


    int is_diagonal = true;
    // First step to check square
    if (r == c)
    {
        // Then it is square amtrix

        // the first part of second step - to check are we in diagonal. if true then we in, if not then we outside of diagoanl 
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++) /* here basically we are chkeing all the value outside diagonal is 0 */
        {
            // if(i == j){
            //     // we are at diagonal
            //     // printf("%d ", a[i][j]);
            // }
            
            
            // 2nd part of 2nd step i need to chek all the value outside diagoanal will be 0
            
            if(i!=j) /* as we do not need to the value of diagonal. so we need to check the outsdie value */
            {
                
                // we are outside of diagoanl
                if(a[i][j] != 0){
                    is_diagonal = false;
                    printf("Not Diagonal matrix\n") ;
                }
            }
        }
        // how we understan from here that is this already been diagonal inside the loop or not. how to keep track of this. for this we need to have a flag variable to track any sort of change
        if(is_diagonal == true){
            printf("This is a diagonal matrix\n");
        }
    }

    }
    else
    {
        printf("it is not diagonal matrix");
    }

    return 0;
}