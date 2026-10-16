/* This function will have return type and parameter */

#include<stdio.h>

/* return_type function_name(parameters)
{
    return sth
} */

int sum(int num1, int num2)
{
    int answer = num1 + num2;
    return answer;
}
int subtract(int num1, int num2)
{
    int answer = num1 - num2;
    return answer;
}

int main()
{
    // int value = sum(10, 20);
    // int value2 = sum(100, 200);
    // int value3 = sum(2, 3);
    // int value4 = subtract( 100, 50);
    int a, b;
    scanf("%d %d", &a, &b);
    int value = sum(a, b);
    printf("%d\n", value);
    // printf("%d", value4);
    return 0;
}


/* There are two types of memory-
1. stack memory 

- when we run c code, that starts from the main function
    - In the stack memory there will be two places. There will be another place where it will store the answer. 
    - One for the main function and another for the sum function.
    - in the main function, there will be place which will store in value variable.
    - it is not possible to access to the another function.
    - return keyword will return the answer in the like it is called.
    - we can name the variable same as one function can not have access to another function
2. heap memory  */