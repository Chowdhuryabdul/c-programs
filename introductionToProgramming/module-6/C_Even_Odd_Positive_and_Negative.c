#include<stdio.h>
int main()
{
    int n;
    int x;
    int even = 0, odd = 0, pos = 0, neg = 0;
    scanf("%d", &n);
    int sum = 0;
    for(int i =1; i <= n; i++){
      scanf("%d", &x);
     /* printf("%d\n", x);  whenever we will take input, we will immediately print the value or will do next work out immediately. if we we do next work out side the loop, these all the values will be out. if we take one input, first of all we have to finsih the work related to this input, then will take next input. Otherwise it will be wasted and will not find. */
    //   This is for even and odd
      if(x % 2 == 0){
        even++;
      }else{ /* here we do not need extra condition because number has two state- either positive or negative */
        odd++;
      }
    //   this is for negative and positive
    /*     Anohter- why we need two if condition, because if conndition get true in conditional ladder then it will not check others. for exemaple if it checks 12 is odd or even, positive or negative. if it checks the first condition and fullfill the first condition as 12 is even number then it will not check whether it is positive or negative. */
    if(x > 0){
        pos++;
    }else if(x < 0){ /* here we need to add extra condition because a number can be positive, negative and only 0. so we need to make the ccondition clear that if the numbr less than 0, otherwise it will count 0 as negative number */
        neg++;
    }
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);
    return 0;
}