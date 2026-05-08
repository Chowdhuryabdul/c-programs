#include<stdio.h>
#include<string.h>




// void count_letter( char string[], int string_lenght, int fre[] )
void count_letter( char string[], int fre[] )

{
    int string_length = strlen(string);
  for(int i = 0; i <= string_length; i++)
  {
        int ascii_value = (int)string[i];
        int index_within_25 = ascii_value - 97;
        fre[index_within_25]++;
    }
}


int main()
{
    char string[101];
    scanf("%s", string);
    

    int fre[26] = {0};
  count_letter(string, fre);
    for(int f_i = 0; f_i < 26; f_i++){
       /*  if(fre[f_i] > 0)
        {
            printf("%c : %d\n", f_i, fre[f_i]);
        } */
        if(fre[f_i] == 0)
        {
            continue;
        }

        // f_i +97 is convert range [0-25] to 97 or 'a'
        printf("%c : %d\n", (f_i + 97), fre[f_i]);
    }

    return 0;
}