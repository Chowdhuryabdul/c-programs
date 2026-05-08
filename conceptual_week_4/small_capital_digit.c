#include<stdio.h>
#include<string.h>



int main()
{
    char str[101];
    scanf("%s", &str);
    int len = strlen(str);

    // int cnt_sml = 0, cnt_cap = 0, cnt_dgt = 0;
    // we can do it by array
    int arr[3] = {0};
    for(int i = 0; i < len; i++){
        if(str[i] >= '0' && str[i] <= '9'){
            // cnt_dgt++;
            arr[0]++;
        }else if(str[i] >= 'a' && str[i] <= 'z'){
            // cnt_sml++;
            arr[1]++;
        }else if(str[i] >= 'A' && str[i] <= 'Z'){
            // cnt_cap++;
            arr[2]++;
        }
    }printf("Count Digit: %d Count Capital: %d  Count Small: %d", arr[0], arr[2], arr[1]);
    return 0;
}