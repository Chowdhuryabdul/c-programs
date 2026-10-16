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
   
 int x;
   scanf("%d", &x);
//    printf("%d", x);
  int i = 0;
   for (; i < n; i++)
   {
    if(x == arr[i]){
        printf("%d", i);
        break;
    }
    
}
if(x != arr[i]){
    printf("-1");
}


   
}