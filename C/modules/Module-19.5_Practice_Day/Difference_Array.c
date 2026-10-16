

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{

    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int arr_a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr_a[i]);
        }

        // Copying to b array
        int arr_b[n];
        memcpy(arr_b, arr_a, n * sizeof(arr_a[0]));

        // Ascendign sorting
        for (int i = 0; i < n - 1; i++)
        {
            // printf("%d ", arr_b[i]);
            for (int j = i + 1; j < n; j++)
            {
                if (arr_b[i] > arr_b[j])
                {
                    int tmp = arr_b[i];
                    arr_b[i] = arr_b[j];
                    arr_b[j] = tmp;
                }
            }
        }

        // absolute differenceing of a and b array and inserting in c array

        int result;
        int arr_c[n];
        for (int i = 0, j = 0; i < n && j < n; i++, j++)
        {

            result = abs(arr_a[i] - arr_b[j]);
            arr_c[i] = result;
        }

        // printing the c array
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr_c[i]);
        }
        printf("\n");
    }

    return 0;
}
