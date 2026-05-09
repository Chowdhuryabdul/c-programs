#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }


    // first part

    int star = 1;
    int space = n-1;
    
  for (int i = 1; i <= n; i++)
  {


    for (int j = 1; j <= space; j++)
    {
        printf(" ");
    }
      
    
    for(int k = 1; k <= star; k++){
       
      if( i % 2 == 0){

        printf("-");
      }else if(i % 2 != 0){
        printf("#");
      }
      
    }
    printf("\n");
    star+=2;
    space--;
  }

    // second part

  star = 2*n-3;
  space = 1;

  for (int i = n-1; i >= 1; i--)
  {

    for(int j = 1; j<= space; j++){
        printf(" ");
    }
    for(int k = 1; k <= star; k++){
          if( i % 2 == 0){

        printf("-");
      }else if(i % 2 != 0){
        printf("#");
      }
    }

    printf("\n");
    space++;
    star-=2;
  }
  
  

    return 0;
}

