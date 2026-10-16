#include<stdio.h>

/* this is one way here concept is - n means how many times it will run
void recur(int n){
    if(n == 0) return;
    printf("I love Recursion\n");
    recur(n-1);
} */

// to take an extra varibale abd set initial value is 1

void recur(int i, int n){
    if(i >= n) return ;
    printf ("I love Recursion\n");

    recur(i+1, n);
}


int main()
{
    int n;
    scanf("%d", &n);
    // printf("%d", n);
    recur(1, n);
    return 0;
}