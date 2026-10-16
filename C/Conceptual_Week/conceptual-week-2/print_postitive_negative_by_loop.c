#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n > 0){
        // from big to small positive number
        for(int i = 1; i<= n; i++){
            printf("%d ", i);
        }
    }else if(n < 0){
        // First  print negative number- from small to big
        // for(int i = n; i <= -1; i++)
        // from big to small or reverse order

        for(int i = -1; i >= n; i--)
        {
            printf("%d ", i);
        }
    }
    return 0;
}