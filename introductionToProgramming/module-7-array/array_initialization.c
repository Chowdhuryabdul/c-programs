#include<stdio.h>
int main()
{
    int x = 10; /* it means declare a variable. if i say the 10 as value. it means i have also initialize */
  /*  int a[] = {10,20,30,40,50};  - in the arry we ust declare the array. here we can intialize the value of array like variable. if we initialise in such manner, then we do not need to say the size. here size is 5. when there is 5 index it automatically take a size of 5.*/

  /*  int a[5] = {10,20,30,};
     we have a array of 5 size, but we decalre or initialise only 3 indexes, rest of them will print 0. so it will print like this - 10 20 30 0 0  */

    // how we can print 0 for the all indexes in array
     int a[5] = {0};
    /* if we want have array with all elements 0
    This shortcut will only work for the fixed value, will not work for the variable sixe array. */
    for(int i = 0; i < 5; i++){
        printf("%d ", a[i]);
    }
    return 0;
}