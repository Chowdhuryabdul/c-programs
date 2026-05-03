#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    
    for(int i = 0; i < n - 1; i++) /* here we can use only n, it will not have any issue, because if n goes to the last element than it will push j out of loop.so loop will not stop anyway. */
    { 

        int tmp;
        for( int j = i + 1; j < n; j++){
            
            // compare two value

            // if(a[i] < a[j]){ /* if left hand is small we want such so have nothing to change here. in this case we do not need this code */ }
            
            
            if(a[i] > a [j]){ /* in which condition we need to swap when the left one is bigger than the right one.  */
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
                
        }
    }

    // print the array to chekc the order
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}


/* there are two types of sort?

this sorting is called selection sort.
1. from big to small - Descending order
2. from small to big - Ascending order

To do this we will use two nested loops 
will use two pointers 

Ascending order-
smaller value will come before the bigger one- why? in ascending order the smallest one come always first. 
we will chekc left element is bigger than the right elemet- A[i] > a[j]? if the value of array of i is 20 and array of j 40, than the condition is false. that means the way we want to sort our array, it is exactly in that condition. 
and j will go next element which is 10; now condiiton is true a[i] > a[j] == 20 > 10; so condition is ture, it means that the way we want that small value will come first. here is not in that order. so in this case we will just swap the this two element 10 and 20.
and the process will run untill the end */

// Descending order-
// we will chek the right one is < the left one.
// if so than we will swap. 
// otherwise left is bigger than the right, then we want to such

/* Ascending order condition will be left > right- if so then will swap 
descending order condition will be left < right. if so then will swap  */

