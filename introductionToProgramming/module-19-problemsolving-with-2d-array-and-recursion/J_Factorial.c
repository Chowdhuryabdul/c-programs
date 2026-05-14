

#include<stdio.h>

long long int print_factorial(int n)
{
    if(n==1){
        return 1;
    }

    long long int multiply = print_factorial(n-1); /* this value to return the value which will return by recursive function */
    return n*multiply;

}

int main()
{
   long long int n;
    scanf("%lld", &n);
    long long int result = print_factorial(n);
    printf("%lld",result);
    return 0;
}

/* In case of factorial by recursion- the number is 5
factotial of 5 is = 5! - it means you need to count 5 with the every digit until 1. it means 5*4*3*2*1

so in case recursion you never go to the 0, if you go 0 then whole result will be 0

first you will go from 5 then 4 then 3 then 2 then 1- you will retun from 1.

--> We will come back from 1, along with we will bring 1 with us as return
--> Then will come to 2 and 2 will multiply himslef  with the return 1. now the result is 2 and will return to next 3
--> Then will come to 3 and 3 will multiply himself with the retunr 2. so 2*3 = 6. now the result 6 will return to next 4
--> Then will come to the 4 and 4 will multiply himself with the return 6. 4*6 = 24. now this 24 will return to next 5
--> Then will come to the 5 and 5 will multiply himself with the return 24. 5*24 = 120. now this will return to the main function where it is first called. */