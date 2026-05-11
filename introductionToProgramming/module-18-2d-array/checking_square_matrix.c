#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }
    
    if(r == c){
        printf("this is a square matrix");
    }else{
        printf("this is not a square matrix");
    }
    return 0;
}