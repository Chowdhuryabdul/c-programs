#include <stdio.h>
#include <stdbool.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    bool flag = true;
    bool flag1 = true;
    bool flag2 = true;

    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j)
                {
                    if (a[i][j] != 1)
                    {

                        flag1 = false;
                        // printf("NO\n");
                    }
                }
                else if (i + j == r - 1)
                {
                    
                    if (a[i][j] != 1)
                    {

                        flag2 = false;
                        // printf("NO\n");
                    }
                }
                else
                {
                    // we are outside diagonal
                    if (a[i][j] != 0)
                    {
                        flag = false;
                        // printf("NO\n");
                    }
                }
            }
        }

        if (flag == true && flag1 == true && flag2 == true)
        {
            printf("YES\n");
        } else if(flag == false || flag1 == false || flag2 == false ){
            printf("NO\n");
        }
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}