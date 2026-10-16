// This will give retrun, but it will be without parameter
// if we do not give any parameter inside the function. in this case we will take input inside the new funciton rather than main functon

#include<stdio.h>

int sum(){

    // this is the user input
    //  int a, b;
    // scanf("%d %d", &a, &b);
    // if we do not take input from user then we can declare value here-
    int a = 10, b = 20;
    int ans = a+b;
    return ans;
}

int main()
{

    int sumVale = sum();
    printf("%d", sumVale);
    return 0;
}