#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    // int a[n];

    int a[n + 1];  // here i have expanede the size of array 1, becasue we will insert one element. now we can make place for the inserted one. why we do not take n-1 because we do not want last element rahter we want to  insert another element in the array. 
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int index;
    int value;
    scanf("%d %d", &index, &value);

    // by this loop we have push all the existing elements to right
    for(int i = n; i >= index + 1; i--){
        // by these we have set the previous value in the next box. here i - 1 means if the index of i is 5 that means will set the value of i -1 = 4 in the index 5. then we check the condition , the value of i is bigger than index (3) + 1 = 4. it means the value of i (5) is bigger than 4, now condition is true. so we will go inside the loop. in the loop, the value of array of i a[i] is equal array of i - 1 = 4. so the value of 5 index is equal to 4. so the value of index 4 will be equal to index 5. then will go to the decrement and increment. here the value of i is inn decrement condition. so the value of i will be 4 now. 
        // so then will check the condition, condition is 4. so 4 is not greater than 4 but equal to 4. so condition is true. then will assgin the value of 3 into value of index.
        // then will check the condition, the value of i is now 3 and 3 is not bigger than 4. so the loop will stop here
        // then will go to the assigning code where we will assign the user value in the user index
        // then we will print the array

        // here we are assigning the value of index 4 into inndex 5. Here the value of i is n, value of n is 5-
        a[i] = a[i-1];
    }
    // by this we can set the user value in the user index, 
    a[index] = value; 

    // here we will print the array
     for(int i = 0; i <= n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}

// Normally the index of array is not the same of size of array. if size of array is 5 then index will be upp to 4. as we take 1 ixe extra then that size will be existed in the array.

// from where we will start the initialisation
// we will start from the sixe of array

// how long loop will run to chnage the index of existing array?

// we will run the loop until the immediate box before user given value. if user want me to insert in 1 index then i will run this until 2 inndex, if user want me to insert in 5 index then loop will run untill 6 index. we will write it index + 1;. why index + 1 becasue we want to run the loop until the previous value. if user give me index 1 then we simply run until 2 in descendant order. so if i want to run until the previous value or want to stop in previous value then we need to write index + 1 it means the previous index of given index.

// in case of increament and decrement?
// every time we will reduce value of i one box as we will start from reverse side

// why we run this lopp?
// we run the loop to move the values 1 box in its right