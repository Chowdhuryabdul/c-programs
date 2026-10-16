// #include<stdio.h>
// int main()
// {
//     int num;
//     scanf("%d", &num);
//     int sum = 0;
//     for(int i = 0;i <= num; i++){
//         /* if(i%2 == 0) */
//         if(i%2 != 0){   
//             sum +=i;
//             printf("%d\n", i);
//         }
//     }
//     printf("The summation is :%d\n", sum);
//     return 0;
// }

#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    for(int i = 0; i <= num; i++){
        if(i%2 == 0){
            printf("even:%d\n", i);
        }else{
            printf("odd:%d\n", i);
        }
    }
    return 0;
}