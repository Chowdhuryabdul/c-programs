#include<stdio.h>
int main()
{
 int tc;
 scanf("%d", &tc);
 while(tc --) /* it means loop wil run until the value is 0. if value is 1 > then true and value is i< then it will false and loop will be stopped */
 {
       int kth;
    scanf("%d", &kth);
    // we need to decalre a varible to define where to start
    int start = 0;
  for(int i = 1; i <= kth; i++){
    // here i need to assigne the value of start 1
    start ++;
    if(start % 3 == 0){
        start ++; /* if the world is modulus by 3 then he dislike this, then we need to go next digit */
        if(start % 10 == 3){ /* by this condition, first i will check is it divisble by 3. if true then will check the next digit if it is divisible by 10. if so skip this as well */
            start ++;
        }
    }
    
    else if(start % 10 == 3){
        start ++; /* here also we need to skip the word and need to go to the next digit */
          if(start % 3 == 0){
            start ++;
        }
    }
  }
  printf("%d\n", start);
 }
    return 0;
}