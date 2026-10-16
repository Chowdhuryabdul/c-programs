/* This problem is to calculate the At Most k Elements summation.  yo will get several problem to solve this-
1. you can choose fewer than k elements
2. handling negative numbers
3. k can be larger than array size - to control this - i < n && count < k */



#include<stdio.h>
// #include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int k;
    scanf("%d", &k);
    // printf("%d\n", k);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    // int sum = 0;

    // descending order
    for (int i = 0; i < n-1; i++)
    {
        int tmp;
     for (int j = i+1; j < n; j++)
     {
       /*  if(a[i] < a[j]){
            int tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
        } */
        if(a[j] > a[i]){
            int tmp = a[j];
            a[j] = a[i];
            a[i] = tmp;
        }
     }    
    }
    

    // print the summation 
    long long int sum = 0;
        int count = 0; /* this is to count k elements */
        
        for(int i = 0; i < n && count < k; i++){
            if(a[i] > 0){
                // printf("%d ", a[i]);
                sum +=a[i];
            count++;
        }
            }
printf("%lld\n", sum);
    
    return 0;
}