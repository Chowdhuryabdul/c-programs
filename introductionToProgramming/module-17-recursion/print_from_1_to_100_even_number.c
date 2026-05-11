#include<stdio.h>



void hello(int trackValue) 
{
    if(trackValue == 101){ 
        return;
    }
    if(trackValue % 2 == 0){ /* this conditon will print all the even number */

        printf("%d\n", trackValue); 
    }
    hello(trackValue + 1);
}


int main()
{   
    int trackValue = 1; 
    hello(trackValue);
    return 0;
}