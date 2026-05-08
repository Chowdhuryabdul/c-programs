#include<stdio.h>

/* void counting( int fre[], int s_freq, int a[], int s_a)  here i have given as input frequeny array, and size of frequeny array, and array of n and size of that array. this is one way. */


void counting( int *fre, int s_freq, int *a, int s_a)
{
 
    
    
    /* Now assigning all the value in 0 */
    for (int  i = 0; i <= s_freq; i++)
    {
        *(fre + i) = 0;
        // fre[i] = 0; both are same
    }
    
    // now counting. 
     for (int i = 0; i < s_a; i++)
    {
      int val =  a[i];
      fre[val]++;
    }
    
   
}


int main()
{
       int n, m;
    scanf("%d %d", &n, &m);
    int a[n];
 for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
   
    int fre[m+1]; 
    counting(fre, m, a, n);

     /* printing - printing must be from 1 according to the question */
    for (int  i = 1; i <= m; i++)
    {
       printf("Give me indexs: %d %d\n", i, fre[i]);
    }
    return 0;
}


