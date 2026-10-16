#include <stdio.h>
#include <string.h>

int is_palindrome(char s[])
{

    int len_s = strlen(s);
    for (int i = 0, j = len_s - 1; i <= len_s && j >= 0; i++, j--)

    {
        // printf("%c--> %c\n", s[i], s[j]);

        if (s[i] != s[j])
        {
            return 0;
        }
    }
   return 1;
}

int main()
{
    char s[1005];
    scanf("%s", s);
    int result = is_palindrome(s);

    if (result == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}