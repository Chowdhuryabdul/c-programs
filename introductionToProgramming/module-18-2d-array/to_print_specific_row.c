#include<stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &a[i][j]);
        }
    }


    // input of specific row
    int specific_row;
    scanf("%d", &specific_row);
    // need to print one row. to do this we will run a loop
    for(int i =0;i<c; i++ ){
        printf("%d ",a[specific_row][i] ); 
    }
    return 0;
}


/* to print specific row - i need to run the loop in the direction of column as we need to go horizontal to get the value. if we run vertical loop then we will get firstly the row index and if we run inside the table then we will get vertical values. as it is says to get specific row then we have to run the loop horizontal loop.ans also we printing one row, but many columns. so we will run the loop on column, not on row */

/* printf("%d ",a[1][i] ); why i select a[1]- because i want to print 1 number row. it is fixed and why choose[i]- becaus i need to value from every column. since i is running from 0-4 column. then if i give i then it will print the value of all column */