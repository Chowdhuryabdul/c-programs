#include<stdio.h>
int main(){
    int i = 1;
    do{
        printf("%d\n", i);
        i++;
    }
    while(i<= 10);
}

// there is a difference between all the loop, in for and while loop condition is used to be earlier then do-while loop. so if condition is not true than loop does not run in case of first two loops, while in the do-while loop it runs at least for the one time even if condtion is not true due to placement of condition in the last part of the loop