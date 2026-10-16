#include<stdio.h>






void fun(int a[]){
 
 *a = 100;
 *(a + 1) = 200;
 
    for(int i = 0; i < 5; i++){
    printf("%d ", a[i]);
 }
}







int main()
{
  int a[5] = {10, 20, 30, 40, 50};
  fun(a);
    return 0;
}