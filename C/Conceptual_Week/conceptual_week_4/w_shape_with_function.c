#include<stdio.h>

void pattern(){
     int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int space = n-1;
    int star = 1;
    for (int i = 1; i <= n; i++)
    {
        for(int s = 1; s<= space; s++){
            printf(" ");
        } 
         for(int j = 1; j<=star; j++){
            printf("*");
         }          
        space--;
        star+=2;
        printf("\n");
    }

    space = 0;
    star = 2*n-1;
    for (int i = 0; i < n; i++)
    {
        for (int k = 1; k <= space; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
          printf("*");
        }
        printf("\n");
        space++;
        star-=2;
          
    }  
}


int main()
{
    
    pattern();
    
    return 0;
 }
   