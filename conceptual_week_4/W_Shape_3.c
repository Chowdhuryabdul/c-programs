#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", a[i]);
    }
    int star = 1;
    int space = n-1;
    
  for (int k = 1; k <= n; k++)
  {
    for (int l = 1; l <= space; l++)
    {
        printf(" ");
    }
      
    
    for(int j = 1; j <= star; j++){
       printf("*");
    }
    printf("\n");
    star+=2;
    space--;
  }

  star = 2*n-1;
  space = 0;

  for (int i = 1; i <= n; i++)
  {

    for(int j = 1; j<= space; j++){
        printf(" ");
    }
    for(int k = 1; k <= star; k++){
        printf("*");
    }

    printf("\n");
    space++;
    star-=2;
  }
  
  

    return 0;
}