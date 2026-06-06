#include <stdio.h>

int main()
{
    int n, price;
    // int price;
    scanf("%d %d", &n, &price);
    // scanf("%d %d", &n, &price);
    // printf("%d %d\n", n, price);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int ans = -1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < price)
        {
            if (a[i] > ans)
            {
                ans = a[i];
            }
        }
    }
    printf("%d", ans);

    return 0;
}