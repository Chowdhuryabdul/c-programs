#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int max = 0;
  for(int i = 1; i <= n; i++){
    int value;
     scanf("%d", &value);
    if(value > max){
        max = value;
    }
    }
  
  printf("%d", max);
    return 0;
   
}