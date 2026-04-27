#include<stdio.h>
int main()
{
        /* without typecast (Integer division) */
        int numerator = 7, denomenator = 3;
        // without typecasting (integer division)
        int wrong = numerator / denomenator;
        printf("Without cast: %d\n", wrong); /* output is 2 */

        // with typecast
        float correct = (float) numerator / denomenator;
        printf("with cast: %.2f\n", correct); /* output is 2.33 */

    return 0;
}