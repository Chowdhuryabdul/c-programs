#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n == 1){
        return 1; // why 1 this is because factorial of 1 is i
    }

    
    // we can make it shorter
    
    // int mul = factorial(n - 1);
    // return mul * n;
    return n * factorial(n - 1) ;
}


int main()
{
  cout <<  factorial(5) << endl;;
    return 0;
}

// the Time complexity of recursion is O(N).
// as to get the fectoial i have to mulitply all the number from 5 to 1. i can not avoid any word otherwise it will not give the right answer