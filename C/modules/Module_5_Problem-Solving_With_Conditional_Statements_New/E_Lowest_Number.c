#include<stdio.h>
#include <stdlib.h>
int main()
{
   int n;
   scanf("%d", &n);
  
   int arr[n];
   
   for (int i = 0; i < n; i++)
   {
    scanf("%d", &arr[i]);
   }
   int sma =arr[0] ;
   int index = 0;
   
   for (int i = 1; i < n; i++)
   {
   if(arr[i] < sma){
    sma = arr[i];
    index = i;

   }
   
}

printf("%d %d\n",  sma, index + 1);
   
}