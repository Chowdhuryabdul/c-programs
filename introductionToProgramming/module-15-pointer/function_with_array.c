#include<stdio.h>

// To pass a array in the function and chage the index value from the function
void fun(int a[])
{
    a[1] = 100;
    /* here how he change the value of 1 index. let assume the address of the point 410, then he will add 1 meand 4 byte.then it will 410 + 4 = 414 which is the address of the 1 index in the array */


    // want to prove here that the pointer in the main function and fun function are same as from the main function it is sent as reference to the fun funnction and we have received - 0x16b8cee40 this for the both
    printf("Fun function pointer address: %p\n", a);
}



int main()
{
      int a[5] = {10,20,30,40,50};
      fun(a);
      printf("Main function pointer address: %p\n", a);
      for (int i = 0; i < 5; i++)
      {
        printf("%d ", a[i]);
      }
      
    return 0;
}

/* here is two things-
--> when we send any sort of variable to the function from the main function. it works as pass by value
-->> when we sent any data-typs-of-array to the function. it works as pass by reference by default. so in this case we do not need send reference from main function. and if we want to change the value of index of array in the function then we do not need to do any dereferencing.  
--> in case of array it does not copy due to waste huge space rather it takes as reference. 
--> in the pointer of the array in the function, it store the address of 0 index. */