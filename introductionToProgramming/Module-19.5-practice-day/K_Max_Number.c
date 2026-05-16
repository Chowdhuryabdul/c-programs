#include <stdio.h>

void print_maximum(int a[], int n, int i, int max)
{

    // base case

    if (i == n)
    {
        printf("%d", max);
        return;
    }

    
    if( a[i] > max){
        max = a[i];
    }
    print_maximum(a, n, i + 1, max);
}

int main()
{

    int n;
    scanf("%d", &n);
    int a[n];
    // int max = a[0];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

     print_maximum(a, n, 0, a[0]);
    
    return 0;
}