#include<stdio.h>
int main()
{
    // process to take input of the first array
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i< n; i++){
        scanf("%d", &a[i]);
    }

    // process to take input of the second array
    int m;
    scanf("%d", &m);
    int b[m];
    for(int i = 0; i< m; i++){
        scanf("%d", &b[i]);
    }

    // declare new array to copy both array. we declare new arry with size
    int c[n+m];

    // this loop will copy the first array and store it in the c array
    for(int i = 0; i< n; i++){
        c[i] = a[i];
    }

    // this loop will copy the second array and store it in the c array
    for(int i = 0; i< m; i++){
        c[i+n] = b[i];
    }

    // to print the result
    // this n + m means the size of whole array. we will print the whole c array here.
    for(int i = 0; i< n+m; i++){
        printf("%d ", c[i]);
    }
    return 0;
}

/* Note:-
--> In this type we need to think of another array to merge these two array.
--> So we need to think about the size of this third or new array.
--> we need to take the third array equivalent to size of the two sample array. if total element of two sample array is 9 then we have to take third array which can accomodate these 9 elements. 
--> to get the size of array we can operate add between two array to get size of new array.int c[n+m];
--> First we will copy the first array  and then the second array
--> we will start copying from the 0 index of the first array, and then onwards...
--> Now will srart copyinng of the second array. we will start from the first index of second array
--> how we know that from whcich index we will start to store the elements in the new array. so we will start to set the element in the next of last index of the first array. for exemple, if the first array has 5 elements it means it will be 4 index and the second has two element which means it has index til 1. if we take the array of sixe 7, so first arrays copying will finish in 4 index in new array, then second arrays first element will sit in the 5th index of new array. as from the 0 to 4th indexes is already filled up by the elements of the first array.
--> so we cam simply say that, we can start to store element of the second array in new array from the size of the first array. we can just write this - c[i+n] - n is the size of the first array.
-->c[i+n] - why we need to add n ere. because we need to start placing the elements of the second array in the third array, from the exact place where first has finished. so n is the size of the first array i means 0 + n = 5. we have total 7 elements to accomodate in the new array. 5 elements from the first array and 2 elements from the second array. 5 elements finished in the 4th index. 
--> how the 2nd loop works in copying- here c[i+n], in the first round value of i is 0. so 0 + n = 5. so in the 5th index will be stored the first value of the second array. 
--> in the second round of the loop the value of i will be 1 now. then i +n = 6. so the 2nd elements of second array will be placed on the 6th index. 
--> then the value of i wil be now 2 and come to the condition to check i is smaller than m. it is not true. both value are same then loop will stop working. 

*/
