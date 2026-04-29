#include<stdio.h>
int main()
{
   int x;
   scanf("%d", &x);
   int first = x / 10;
   int second = x % 10; 


   /* why we wrote the seconed one first and the first one inn last. because if the number is 20. it is possible to divide 0 by 2, bot 2 by 0. in such case result will be wrong. so as we use the or in the condition, which means if one of the condition is right then condition will be rigt. if first one is right then it will never checkc the second one. so this is the reason to write the second one first. */
   if(second % first == 0 || first % second == 0){
    printf("YES");
   }else{
    printf("NO");
   }
    return 0;
}