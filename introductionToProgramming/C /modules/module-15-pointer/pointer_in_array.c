#include<stdio.h>
int main()
{
    int a[5] = {10,20,30,40,50};

    // address of the valus of 0 index
    printf("This is the address of 0th index of array: %p\n", &a[0]); /* the adress name - 0x16b99ae50 */
   
    // print the point of array which is name of the array
    printf("Array er name: %p\n", a); /* - the name of pointer is - 0x16b99ae50. and both are similar */
   
    // dereference of the pointer- we know by dereferening it will give the value of that address

    printf("%d\n", *a); /* we get 10 whhich is the value of the 0 index. why it comes the value of 0 index? this is because array name which is pointer that sotres the adress of the first index of array which 10. */

    // to change the value of 0 index 
    *a = 100;

    // to change the next value of next index
    /* how it does by adding 1. we know that it will occupy the for byte. it means if the location address is E00 of 0 index. then it will occupy E01 E02 E03. but here adding 1 mean to go next index. how? one integer occupy the 4 byte so if the address of the 0 index starts from E00 then it add 4 byte with it. so it will be E04 which is value of next index */
    *(a+1) = 200;

    for(int i = 0; i < 5; i ++){
        printf("%d ", a[i]);
    }

    // address of the valus of 1 index
    // printf("%p\n", &a[1]);
    // address of the valus of 2 index
    // printf("%p\n", &a[2]);
    // address of the valus of 3 index
    // printf("%p\n", &a[3]);
    // address of the valus of 4 index
    // printf("%p\n", &a[4]);
    return 0;
}

/* How pointer comes in array?
the name of the Array which is a. this is a pointer 
since the name of array is pointer, then which address it stores?. It stores the address of the 0 index of the array. 
*/