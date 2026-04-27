#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    // we take input by this loop
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);   
    }

    // her we run the operation 
    for(int i = 0; i < n; i++){
        // if(a[i] == 0){
        //     a[i] = 0;
        // }
      if(a[i] > 0){
        a[i] = 1;
      }else if (a[i] < 0){
        a[i] = 2;
      }
    }

    // here we print the result
     for(int i = 0; i < n; i++){
        printf("%d ", a[i]);   
    }
    return 0;
}