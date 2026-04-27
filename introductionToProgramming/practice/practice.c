#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while(n != 0){
        printf("%d ", n % 10);
        n /= 10;
    }
    return 0;
}

/* here how logic works here-
first we check the input of n which 2345.
then we will run unntil the value of n is 0.
is the value of n id 0? answer is no.
so it will go inside the loop and print the value n % 10 which will be 5.
then the whole number 2345 will be divided by 10 and will get 234 which will store it in n.
and second round we will check again and store the result in n. we will get 4 after doing mod by 10 and store 23 in the n after diving by 10
and third round we will check again and store the result in n. we will get 3 after doing mod by 10 and store 2 in the n after diving by 10
and fourth round we will check again and store the result in n. we will get 2 after doing mod by 10 and store 0 in the n after diving by 10. if you divide 2 by 10 you will get 0
lastly the value of is 0, so loop will stop to run */
