#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    // input modification
    // if input is 1, upper part must have 6 lines
     int lines = 6;

    //  track the odd-number changing
    int track_change = 1;

    while(track_change < n){
        lines++;
        track_change+= 2;
    }

    // Upper part for the tree- pyramid shape

    int star = 1;
    int space = lines - 1;

    for (int i = 1; i <= lines; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= star; k++)
        {
            printf("*");
        }
        printf("\n");
        star+=2; 
       space--;
    }

    // lower part of tree
    
    int lower_space = lines - (n/2) - 1;
for (int i = 1; i <= 5; i++)
{
    for (int j = 1; j <= lower_space; j++)
    {
        printf(" ");
    }
    for (int k = 1; k <= n; k++)
    {
        printf("*");
    }
    printf("\n");
    
    
}


    return 0;
}