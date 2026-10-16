// There is another way to pass array from the function

#include<stdio.h>


void fun(int a[], int n)
/* void fun(int* p, int n)  we can also take as pointer, but it does not look good */
{   
    
    //  to print from here
    // but in case of input 
    for (int i = 0; i < n; i++)
      {
        printf("%d ", a[i]);
      }
}



int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
      
      fun(a,n);
 
     
    return 0;
}

/* in case of input
when we call the function we also need to send the size of array with the array name 
if we try to return a array from the function, we can not do so. as after retrun it will deleted all the things. if we return array a then it will retunr just 0 index as we have alreasy seen that in the name of array as pointer just store the address of the first index of array. so it will return the first index and rest of the indexes will be deleted.
Normal array can not be returend.
*/