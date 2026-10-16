#include<stdio.h>
int main()
{
    // 2d arra declaration
    // int[size of row][size of col]
    int a[3][4]; /* here 3 is row and 4 is column */
    
    // want to access specific index and store a nnumber
    // a[row][col] = value
    a[1][2] = 10;
    printf("%d", a[1][2]);

    return 0;
}