#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int a[n];
    for(int i = 0; i< n; i++){
        scanf("%lld", &a[i]);
    }
    long long int x ;
     scanf("%lld", &x);
    //  printf("%lld\n", x);
    // we will store the found value here. i can not give the value 0, because we do not know what will be the index of array. rather we can give the value from the question  - 1 as if we do nnot find any match then it will print it.
    int index = -1;

     for(int i = 0; i < n; i++){
       if (a[i] == x){

        index = i;  
        break;
       }
     }
     printf("%d", index);
     
    return 0;
}