#include<stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // int fre[m+1] = {0}; the rules is that if there is fixed variable length  of array then we can declare 0 as value. As the lenght of variable is dynamic m can be samll or big in that case we can not assign the value 0

    int fre[m+1]; /* why plus 1 - this is because array indexing from 0. */ 
    
    
    /* Now assigning all the value in 0 */
    for (int  i = 0; i <= m; i++)
    {
        fre[i] = 0;
    }
    
    // now counting. 
     for (int i = 0; i < n; i++)
    {
      int val =  a[i];
      fre[val]++;
    }
    
    /* printing - printing must be from 1 according to the question */
    for (int  i = 1; i <= m; i++)
    {
       printf("Give me indexs: %d %d\n", i, fre[i]);
    }
    return 0;
}


// in frequency array index itself considered as a number, but in normal array index is not considered as number, suppose array 12345 here - fre[0] - here means - frequency of number 0. fre[1] - frequency of number 1. fre[5] - frequency of number 5. so here index = number - fre[0] = number 0; fre[1] = number 1; fre[2] = number 2;