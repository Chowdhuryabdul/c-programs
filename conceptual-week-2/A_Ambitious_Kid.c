#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    
    int a;
    int mnVal = INT_MAX;
    for(int i = 1; i <= n; i++){
        scanf("%d", &a);
     
     /* first i want to convert all the numbers into a postive number  */
     //  this is one way to make the number positive
     /*    if(a < 0){
        a = a * -1;
     } */

     // The second way to make the number positive
     a = abs(a);
    
     if(a < mnVal){
        mnVal = a;
     }
    
    }
     printf("%d", mnVal);
   /*  int smallest = 0;
    for(int i = 0; i < n; i++){
        if(a[i] < smallest){
            smallest = a[i];
        }
    } 
    printf("%d", smallest); */
    return 0;
}