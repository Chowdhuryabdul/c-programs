#include<stdio.h>
#include<limits.h> /* this header file for the INT_MIN */

int main()
{
    /* This variable to refer how many inputs */
    int n;
    scanf("%d", &n);

    //    this is to get the max value
    /* int max = 0  - if i take this value 0, then it will not take any minus value which will give the wrong result in some test cases */
    int max = INT_MIN; /* - rather this int-min will take from the lowest minus value to highest positive value */
    // printf("%d", max);

    //    this is to get the min value
   /* int min = INT_MAX  - if i want to find the minimum value then i will use this */
   
   /* This loop will run amount of times based on the number of input */
   for(int i = 1; i <= n; i++){
        
        int value; /* this varibale refer to the input */
        scanf("%d", &value);
        if(value > max){ /* for minimu here will be reverse comaprions value < min */
            max = value;
        }
    }

    /* ned to print from the outside of the loop */
    printf("%d", max);
    return 0;
}