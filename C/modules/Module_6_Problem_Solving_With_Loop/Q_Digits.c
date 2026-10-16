#include<stdio.h>
int main()
//    this is test case input which is 4
{    
int t;
    scanf("%d", &t);
    
    // this loop will allow to run the loop equivalent to t value
    for(int i = 1; i<=t; i++){
        int n;
        scanf("%d", &n); /* here is our input 5421 */
        
        // this code has failed for the test case 8- where the value of n is 0, but here we have set the condition in while loop that if n is not equal to 0 then loop will be stopped. so can handel it in twp ways- 1. we can simply write if conditon. 2. anothe way we can use here do..while loop.

        // how do while loop works - here if the value of n is 0 then it stop works. but in do while loop, first work is done and check the condition. so if first it is print the 0 then check the condition will be ok for us. 

       /*  if(n==0){

            printf("0");
        } */

        // here we have written only condition because we do not have anything to initialise and increment and decrement

        do /* we will run this loop until the value of n will be 0 */
    
        {
           printf("%d ", n%10); /* here first we will divide 5421 by 10,  will get remian 1 which will be printed. then we divide n(5421) again by 10 and store it in n. if we divide 5421 by 10, we will get intger 542 which is stored in n. Now n value will be 542. then again will go to the loop and check the value of n is 0? if not we will run again and again until it gets 0. */
           n/=10; 
        }while (n != 0);
    //    here i am giving new line as after every number it will go to the new line
    printf("\n") ;
    }

    
    return 0;
}

// #include<stdio.h> // int main()
// {   
//     int t;
//     scanf("%d", &t);
//     for(int i = 1; i <= t; i++){
//         int n;
//     scanf("%d", &n);
//     while (n != 0)
//     {
//         printf("%d ", n%10);
//         n/=10;
//     }
//     printf("\n");
// }
    
    
//     return 0;
// }
