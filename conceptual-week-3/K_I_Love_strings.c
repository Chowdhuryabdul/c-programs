#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        char s[66];
        char t[66];
        scanf("%s %s", s, t);

        int s_len = strlen(s);
        int t_len = strlen(t);

        // print the common part or minimum index of string - common part means if one index is sixe of 6 another is 7. here common is 6 index
        int i = 0, j = 0;
        while (i<s_len && j<t_len)
        {
            printf("%c%c", s[i], t[j]);
            i++, j++;
        }

        // here will print the remaining part
        while (i<s_len)
        {
            printf("%c", s[i]);
            i++;
        }
        while (j<t_len)
        {
            printf("%c", t[j]);
            j++;
        }
        
        printf("\n");
        
    }

    return 0;
}