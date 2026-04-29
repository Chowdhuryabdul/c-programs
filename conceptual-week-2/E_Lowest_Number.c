#include<stdio.h>
#include<limits.h>
int main()
{
    
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 1; i < n; i++){
        scanf("%d", &arr[i]);
        // printf("%d ", arr[n]);
        
    }

    // int mnval = 1e6;
    int mnval = INT_MAX;

    // why took - 1- in the question it says that i have to find the index of that number as well. so i have to take a varibale. here i take invaild index because it will be outside of the valid index so i can assign the new index in this variable. and invalid index is good to compare. see i cann decalre a noraml varaible without assigning anything, but stil it is working. but -1 is more professional.
//    int min_index = -1;
   int min_index;
    for(int i = 1; i < n; i++){

        if(arr[i] < mnval){
            // here i hae updated the minimum value
            mnval = arr[i];
            // here i have updated the index
            min_index = i;
        }
    }
    printf("%d %d ", mnval, min_index);
    return 0;
}


/* here the question says that index will start from 1 index. we can do it in two ways-
1- we can start the loop from 1 rather than 0;
2. if we start from 0 then i have to add 1 in final printf */