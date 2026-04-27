#include<stdio.h>
// #include<stdbool.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);

    // we want start from the first letter that is why we take a variable with 0
    int i = 0;
    // since we just need to run a condition so we can run while loop. we need to give a condition to ensure where it will stop. we have already listed down 5 scenario where we need to stop the loop. either we need to write here 5 condition for the 5 scenrio. it is difficult rahter we will not write any condition and keep it like this. it will behave as infinit. Since we have written break in 5 scenarion whenever it will find match it will be stopped automatically. to run loop we need to write somthing. so we will write here true. we need to add header of true-#include<stdbool.h>. we can rather add 1 then we do not need to add any header file.
    while(1){
        // when both are finished
        if(a[i] == '\0' && b[i] == '\0'){
            printf("Equal");
             // when we understand both are equal then we do not need to check in further, we can stop here
            break;

            // only a is finished
        }else if(a[i] == '\0'){
              printf("A is smaller");
               // when we understand A is smaller then we do not need to check in further, we can stop here
            break;
              // only b is finished
        }else if(b[i] == '\0'){
              printf("B is smaller");
               // when we understand B is smaller then we do not need to check in further, we can stop here
            break;
              // only a is smaller
        }else if (a[i] < b[i]){
            printf("A is smaller");

            // when we understand A is smaller then we do not need to check in further, we can stop here
            break;
            // only b is smaller
        }else if (b[i] < a[i]){
            printf("b is smaller");
             // when we understand B is smaller then we do not need to check in further, we can stop here
            break;
            // only both are similar, in case we will continue cheking
        }else if( a[i] == b[i]){
           i++;
        }
    }
    return 0;
}