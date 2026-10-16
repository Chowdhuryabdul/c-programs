#include<stdio.h>
int main()
{
    for(int i =1; i<= 5; i++){ /* in the loop if i write i++ or ++i result is same, becaues of ++1- it means first increment then work. but here is no work done after this, such as we do not print the value of i after this, we do not store the value of i in the seperate variable or it is not in any conditional format. so as long as we do not do any work after pre increment that is why it can not show it after work value. so it stays same. */
        printf("%d\n", i);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int x = 10; /* -11 */
    int y = x++; /*  -11 */
    int z = ++y; /* 11 */
    printf("%d\n", z++); /* here real value is 12 but it will show 11 as work first and increment later. so first it will print the value of z which is 11 and then do the inncrement, but to show this increment we need to print z later. */
    printf("%d\n", z);
    return 0;
}

#include<stdio.h>
int main()
{
    int x = 10; 
    ++x; /* here it is preincrement. so first cause the increment, the value of x will be 10+1=11 then, will perform the work. but here there is nothing to do, so it will be 11. noe in print option, first will do increment. so value of x is 11 and increment 1 which will be 12 then will print the value of x which is 12. */ 
    printf("%d", ++x);
    return 0;
}

#include<stdio.h>
int main()
{
    int x = 10;
    --x; /* - here first will be decrement, so value of x is 10 and it will be decrement to 1 it will be 9. so nothing to do after decrement. then in he print first will do the work what is the work- prinnt the value of x which 9 then decrement 1 that will be 8. but here it will be printed 9 because after this there is no code to show decrement 1 which is 8. */
    printf("%d\n", x--); 
    printf("%d\n", x); /* - here will show the value 8 */
    return 0;
}