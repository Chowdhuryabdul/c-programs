#include<stdio.h>

void stop_recusion(int i, int n){

   
//    thhis is one way to do this
    /*  if(n == 3){
        return;
    }
    printf("I love Recursion\n");
    stop_recusion(n+1); */

    // another way is--
    // in case of condition return can be wrritten in the same line but it will be executed in a order. this return will not return any value, it will just return from here.
    /* if(n == 0) return;
    printf("I love Recursion\n");
    stop_recusion(n-1); */

    // another way.--

    if(i > n){
        return;
    }
     printf("I love Recursion\n");
    stop_recusion(i+1, n);
}

int main()
{
    int n;
    scanf("%d", &n);
    stop_recusion(1, n);
    return 0;
}