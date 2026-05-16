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
    
    // step find minimum element
    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        if(a[i] < min){
            min = a[i];
        }
    }
    // printf("%d\n", min);

    // step count frequency of minimum
    int count = 0; 
    for (int i = 0; i < n; i++)
    {
        if(a[i] == min){
            count++;
        }
    }
    // printf("%d", count);

    // check if count is odd
    if(count % 2 != 0){
        printf("Lucky\n");
    }else{
        printf("Unlucky\n");
    }
    


    return 0;
}