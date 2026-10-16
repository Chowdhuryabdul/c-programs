// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char string[101];
//     scanf("%s", string);
//     int string_length = strlen(string);

//     int fre[26] = {0};
//     for(int i = 0; i <= string_length; i++){
//         int value = string[i] -'a';
//         fre[value]++;
//     }
//     for(int i = 0; i < 26; i++){
//         if(fre[i] > 0){

//             printf("%c : %d\n", 'a' + i, fre[i]);
//         }
//     }
//     return 0;
// }

// Another
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char string[101];
//     scanf("%s", string);
//     int string_length = strlen(string);
//     int freq[128] = {0}; /* 0-127 [a=97 -> z = 122] */
//     for(int ind = 0; ind< string_length; ind++){
//         int ascii_val = (int)string[ind]; /* char to int */
//         freq[ascii_val]++;    
//     }
   

//     for(int f_i = 97; f_i <= 122; f_i++){
//        /*  if(freq[f_i] > 0)
//         {
//             printf("%c : %d\n", f_i, freq[f_i]);
//         } */
//         if(freq[f_i] == 0)
//         {
//             continue;
//         }
//         printf("%c : %d\n", f_i, freq[f_i]);
//     }
//     return 0;
// }


#include<stdio.h>
#include<string.h>
int main()
{
    char string[101];
    scanf("%s", string);
    int string_length = strlen(string);

    int fre[26] = {0};
    for(int i = 0; i <= string_length; i++){
        int ascii_value = (int)string[i];
        int index_within_25 = ascii_value - 97;
        fre[index_within_25]++;
    }
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

