#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a [n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int index ;
     scanf("%d", &index);
    // deleteing loop
     for(int i = index; i < n - 1; i++){
        a[i] = a[i  + 1];
     }
    //  here i need to ensure that the last existing element which will be remaind after moving to left side. so we need to ignore that. we will ignore it by not to print. for this we can take this code n-- or in the print we can set the condtion n - 1. it works for both. 
    // n--;
      for(int i = 0; i < n - 1; i++){
        printf("%d ", a[i]);
    }
    //  here we start from the user index, so we initialise i = index, if user inndex is 3 then we will start the loop from 3 index.
    // the second conditionn will be that we always end the loop in the next last element. if we have an array of 10 elements then we have index til 9. so if we want to delete the 7th index, then we will bring 8th to 7th, 9th to 8th and 10th to 9th. then finish. so we have finsihsed the before one in the last element.


    return 0;
}

/* how code of the deleting-loop work here -
--> value of n is 5 which user gave to us
--> then we took the user index value (2) by a variable.
--> in the loop to delete, first initialize int i = index, so value of i is 2.
--> come to the condition - i is smaller than n - 1. n-1 means it will end before immediate index of last index of array. so valu of is 2 and n - 1 (5 - 1) = 4. so condition is true.
--> now will go inside the loop, here array of i a[i] is index 2 in the array. so the next index a[i + 1] . means third index will be assigned in the 2 index. 
--> then will go to the increment, now the value of i will be 3, conditon is also true, then it will assign 4th index value in the 3rd index value.
--> then will go to increment, the value of i will 4. so the value of i (4) is smaller than the valu of n - 1 (4). no it is not smaller, rather it is equal. so condition is false and loop will stop here. 
--> then will go next loop. here we find n--, by which we have reduce the size of array 1. it means size of array from 5 to 4. theoretically it does not reduced, but we just assume the it is reduced. Now the value of n will be 4. 
--> it will print the 4 values. 
--> in the printing loop we have written the condition i < n; so if the value of n is 4 then it will run til less than 4 which means it will run until 3, what we have seen in the code.  */