/* 1 ≤ i < j ≤ N
what does it means?
1 ≤ i	i is at least 1
i < j	i is less than j
j ≤ N	j is at most N

if the value of n is 5
if i is 1, then value of j will be 2, 3, 4, 5;
if the value of i is 2, then value of j will be  3, 4, 5;
if the value of i is 3, then value of j will be 4, 5;
if the value of i is 4, then value of j will be  5;
if the value of i can not be 5, then value of j will be 6; but our n value is 5 which means we have array of 5 elements.  */
/* if it says in the question that we have to start from the 1 index then we will simply start from 0 index and will finish from n - 1. it means will start from 1 and finish at n. */

/* Here Ai and Aj it means the value of array 
and i and j are index of the array */

#include<stdio.h>
#include<limits.h>
int main()
{
    int tc;
    scanf("%d", &tc);
   while (tc--)
   {
     int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

/* here why it will run until n - 2? this is because the value of i will be smaller than value of j. so if i = 0 then, j = 1. 
so if the array size is 5, so i can run until second last element of array which n - 2. if i can run til  n - 2 than j can run til last element n - 1. */ 
int mnval = INT_MAX;    
for(int i = 0; i <= n - 2; i++)
    {
        for(int j = i + 1; j <= n - 1; j++)  
        {
           int value = arr[i] + arr[j] + j - i; /* got these formula from the question (Ai + Aj + j - i) */
           if(value < mnval){
            mnval = value;
           }
        }
    }
    printf("%d\n", mnval);
   }
   


    return 0;
}