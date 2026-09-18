#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
   
    // we have to retunr two base case as we know that first number in the fibonacci is fixed which is 0 1. and fibonacci of 0 will 0 and 1 will be 1
    if(n == 0)
    return 0;
    if(n == 1)
    return 1;

    // shorter versio of base case
    // if(n == 0 || n == 1)
    // return n;

    // or we can __write
    // if(n < 2){
    //     return n;
    // }

    return fibonacci(n - 1) + fibonacci(n - 2);//  it menas frist part is 6 - 1 and second part is 6 - 2. so total will be 5 + 5 = 9 will send 


    int first_part = fibonacci(n -1);
    int second_part = fibonacci(n - 2);

    return first_part + second_part;
}

int main()
{
    // we want to know the 5th number fibonacci value


  cout <<  fibonacci(5) << endl;
    return 0;
}