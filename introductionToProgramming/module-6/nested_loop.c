#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
   for(int j = 1; j <= t; j++){
     for(int i = 1; i <= 5; i++){
        printf("%d ", i);
    }
    printf("\n");
}
return 0;
}