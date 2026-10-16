#include <stdio.h>
int main()
{
    // test case input
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {

        // multiplication result input
        // printf("%d", t);
       long long  m;
        scanf("%lld", &m);
        // printf("%d", m);

        // three of those four numbers input
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        // Find the missing number
        long long multiplication_result_of_three = a * b * c;
        long long result;

        if (m == 0)
        {
            printf("0");
        }
        else if (m % multiplication_result_of_three == 0)
        {
            result = m / multiplication_result_of_three;
            printf("%lld", result);
        }
        else if (m % multiplication_result_of_three != 0 || m % multiplication_result_of_three < 0)
        {
            printf("-1");
        }
        printf("\n");
    }

    return 0;
}