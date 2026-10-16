#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    // these are two pointers to reverse array. we need to assign the value of these two. array start from 0. the value of i will 0. and array end will be n -1. so the value of j will be n -1 which is last index. these i and j are index, not value.
    int i = 0;
    int j = n - 1;
    while( i < j){
        // these are for swapping
        int tmp = a[i];                
        a[i] = a[j];
        a[j] = tmp;

        // here the value of i will increase and the value of j will be decraed
        i++;
        j--;
    }
    // print the array
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}

// how it works
// --> the value of n is 6
// --> then we have taken two variables i and j. i starts from beginning index 0 and j starts from last index which is n - 1.
// --> the will runn the loop until the value of i is smaller than j in the condition.
// --> first run, now the value of i is 0 and value of j is 5. so i is smaller than j and condition is true. 
// --> then come to inside the loop and have done the first swap
// --> then increase the value of i from 0 to 1, at the same time we have reduced the value of j from 5 to 4. 
// --> Now condition is true
// --> then at the end value of i will be 3 and and the value of j will be 2 then condition is false. and then cross each other and  loop will stop there
// -->
// -->
// -->
// -->