#include<stdio.h>
int main()
{
    int n;
    int star = 1; /* - normal grwoth */
    // int star = 5 - reverse growth
    scanf("%d", &n);
    // printf("%d", n);
    
    for(int i = 1; i<= n; i++ ){
        
      for(int j = 1; j <= star; j++){
        printf("*");
      }
      printf("\n");
      star++;/* Normal growth  */
      // star--;reverse growth 
    }
    return 0;
}