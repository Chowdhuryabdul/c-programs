// #include<stdio.h>
// int main()
// {
//     int x = 10;
//     // post increment - so the value of x will by 11 and y 10 
//     int y = x++;
//     int z = ++y;
//     printf("%d %d %d", y, x, z); /* here all the value is 11 */
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int n;
//     int x;
//     scanf("%d", &n);
//     for(int i = 1; i <= n; i++)
//     {
//         scanf("%d", &x);
//         printf("%d\n", x);
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     for(int i = 0; i<= 10; i++){
//         printf("hi");
//         if(i > 2){
//             break;
//         }
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i = 3;
//     while(i <= 5){
//         for(int j = 0; j <i; j++){
//             printf("*");
//         }
//         i++;
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {

//   for(int i = 0; i<5; i++){
//     if(i == 3){
//         continue;
//     }printf("%d", i);
//   }
//     return 0;
// }

#include<stdio.h>
int main()
{
    for(int i = 0; i <= 10; i++){ 
        if(i > 2){
            continue;;
        }printf("hi");
    }
    return 0;
}