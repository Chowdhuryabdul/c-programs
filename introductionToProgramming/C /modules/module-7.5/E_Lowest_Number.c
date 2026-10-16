#include<stdio.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    /* we need to store here the biggest value of integer to compare */
    int lowest = INT_MAX;
    // this is for the index
    int index;
    for(int i = 0; i < n; i++){
        if( a[i] < lowest){
         lowest = a[i];
        //  in hte question it says we nned to start index from 1. so here index of i is 0. i+1 = 1
         index = i+1;
        }
    } 
    
    printf("%d %d", lowest, index);
    return 0;
}