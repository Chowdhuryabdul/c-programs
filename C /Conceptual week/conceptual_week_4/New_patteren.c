#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int integer = 1;
    for (int k = 1; k <= n; k++)
   {
     for(int j = 1; j <= integer; j++){
        printf("%d", j);
    }
    printf("\n");
    integer++;
   }
   int space = 1;
    // int integer1 = n-1;
    int integer1 = n-1;
    for (int k = 1; k <= n-1; k++)
   {

    for(int l = 1; l<= space; l++){
        printf(" ");
    }
     for(int j = 1; j <= integer1; j++){
        printf("%d", j);
    }
    printf("\n");
    integer1--;
    space++;
   }
   
    
    return 0;
}