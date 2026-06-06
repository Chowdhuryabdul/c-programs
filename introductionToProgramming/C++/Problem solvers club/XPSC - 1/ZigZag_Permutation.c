#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    
    // construct permutation
    int small = 1, large = n; 
    
    // go to each postion based on index from 1 to n
    for (int i = 1; i <= n; i++)
    {
        // check the index is even or odd
        if(i % 2 == 0){
            // it is evne
            printf("%d ", large);
            large --;
        }else {
            // it is odd
            printf("%d ", small);
            small++;

        }
    }
    
    return 0;
}