#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[55], t[55];
        scanf("%s %s", s, t);
        int len_s = strlen(s);
        int len_t = strlen(t);

        int i;   /* here the value of i is 2 after looping thorugh. we initialise this outside to check which index is printed and we can use this later */
        for (i = 0; i < len_s && i < len_t; i++)
        { /* this loop will stop when two string is finished or one of them is finished. if two string is finished then we will get expected output. but if one string is finished and another string is not finished yet. Then loop will stop printing as it is done. Then we have to print the left over string exactly where it is done to print */
            printf("%c%c", s[i], t[i]);
        }

       
        // now what we will do - we will print from that i string which is remained unprinted

        // then first we need to check is there any left over in s-string after printing
        // if the value of i is still smaller than length, still string to print
        if (i < len_s)
            {
            for ( ;i < len_s; i++)
             /* we will not initialise anything because the value of i is already declared we will not change anything. the value of i 2, we want to keep it 2 */
                printf("%c", s[i]);
            }
            // the same we need to check in anythhing left in t-string as well we need to check is there any left over in s-string after printing
            if (i < len_t)
            {
                for ( ;i < len_t; i++)
                 /* we will not initialise anything because the value of i is already declared we will not change anything. the value of i 2, we want to keep it 2 */
                    printf("%c", t[i]);
                
            }
            printf("\n"); 
    }

    return 0;
}

/* while(t--) or while(2--)
we usually write a condition in the while loop, for example (i < 2).
if you write sth <=0 in the while in consider it as false and all the positive numbes considers it as true.
t-- it means post decrement. first the work will be done and then will do the decrement. 2 consider out compiler as true, so first round will be 1 reduced and second ruond will be reduced 2 and then thirrd round will be 0, it consider 0 as false and condition will be false and loop willl be sttopped.  */

// if we initialize sth inside the loop then you will not find it from outside. if you want to find it then you have to declare or initialize outside of the loop.