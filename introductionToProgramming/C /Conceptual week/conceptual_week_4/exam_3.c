#include <stdio.h>

int count_before_one(int a[], int size_a)
{

    // int theNumber = 1;
    // int count = 0;
    for (int i = 0; i < size_a; i++)
    {

        if (a[i] == 1)
        {
            // count = i;
            // break;
            return i;
        }
    }
    // return count;
    return size_a;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int result = count_before_one(a, n);
    printf("%d", result);

    return 0;
}