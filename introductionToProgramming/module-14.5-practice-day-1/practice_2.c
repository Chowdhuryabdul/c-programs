#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    // int starChanging = 1; normal 
    // int space = n-1;
    int starChanging = 5;
    int space =1;

    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= space; j++){
            printf(" ");
        }
        for (int k = 1; k <= starChanging; k++)
        {
           printf("*");
        }
        
        
        // space--; normal
        // starChanging++;
        space++;
        starChanging--;
        printf("\n");
    }
    
    return 0;
}