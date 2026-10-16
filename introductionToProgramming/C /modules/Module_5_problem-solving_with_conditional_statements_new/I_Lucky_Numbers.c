#include<stdio.h>
int main()
{
   int a;
   scanf("%d", &a);
   
   int first = a / 10;
   int last = a % 10;
//    printf("%d %d", last, first);
   if(last % first == 0 || first % last == 0){
    printf("YES");
   }else{
    printf("NO");
   }
   
}