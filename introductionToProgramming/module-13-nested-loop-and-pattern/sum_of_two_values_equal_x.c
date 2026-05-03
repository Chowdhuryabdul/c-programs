#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x;
    scanf("%d", &x);

    int flag = 0;
    for(int i = 0; i < n-1; i++){

        for(int j = i+1; j < n; j++){
            // printf("%d %d\n", arr[i], arr[j] ); this is to check all the possibel pair without repitation
            if(arr[i] + arr[j] == x){
                flag = 1;
                printf("YES\n");
                printf("%d %d", arr[i], arr[j]);
            }
            // else{ /* in this way it will print NO every time whenever the result of add is not equal to x. but question said to us that we will print the NO, afther chekcik the whole loop if we do not get the equal, so we can not print No such way. and result will be like this- NO NO NO NO YES NO */
            //     printf("NO\n");
            // }
        }
    }
    // printf("NO\n"); again after this, it prints NO, althhoug it prints YES. because we have set code like this. but we do not want such

   /*  so the question is that where and when we can print NO?
    First of all, if the first condition is not correct for any times then we want to print NO. Not in any other case. 
    And another question how i can know from the outside of loop that the first condition have got true or not. so to track or reserve the result of the first condition. i need to use the flag variable, by which we can communicate from the outside of the loop to get to know the condition of the loop has got true or false. 
    when the condition is true then we will not print NO.
    we will print NO, only if the previous condititon does not fullfill */ 

    /* if the condition inside the loop is not true then the value of flag will never be changed. */

    if(flag == 0){
        printf("NO\n");
    }
    return 0;
}

/* why we can not start both loop from the 0 index?
- because it says we have to add two different variables
- if both start from 0, then it will add 0 index two times. which is wrong.
why we start one after another?
this is because -
for example, i have array of 5 3 2 6
so we can make pair by 5 is - 53, 52, 56
we can make fiar by 3 is - 35, 32, 36
and we can make par by 2 - 52, 23, 26
and we can make pair by 6 - 65, 63, 63

if you can notice that there are many repitation in making pair. and we do not need to make pair by 6 as we have already made pair by 6 beforehand.
Rather if i run two loop one after another and the first will be finished before the last element, then it will make all the pair withour repitition.  */