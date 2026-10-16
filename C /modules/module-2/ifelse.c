// #include<stdio.h>
// int main()
// {
//     int tk;
//     scanf("%d", &tk);
//     if(tk >= 100){
//         printf("we will eat burger");
//     }else{
//         printf("will not eat burger");
//     }
//     // printf("%d", tk);
// }

#include<stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if(tk == 100){
        printf("we will eat burger");
    }else if(tk <= 50){
        printf("we will eat fuska");
    }else{
        printf("we will not eat anything");
    }
}