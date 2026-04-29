#include<stdio.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        int kth;
        scanf("%d", &kth);
        int count = 0; /* how many like number found */
        int num = 0;    /* current number we are cheking */
        while (count < kth)  // Keep going until we find kth liked numbers
        {
            num++; // Check the next number

            // cheked if number is liked
            if(num % 3 != 0 && num % 10 != 3 ){
                count++;
            }
            // if disliked jest nothing
        }
        printf("%d\n", num);
    }
    
    return 0;
}