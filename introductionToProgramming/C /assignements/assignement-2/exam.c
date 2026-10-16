// // question 1
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for(int i = 1; i <= n; i++){
//         printf("%d. I Want More Assignments\n", i);
//     }
//     return 0;
// }
// question 1
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     if( n > 0){
//         for(int i = 1; i <= n; i++){
//             printf("%d ", i);
//         }
//     }else if (n <= 0){
//         for(int i = n; i <= 0; i++){
//             printf("%d ", i);
//         }
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for(int i = 0; i < n; i++){
//         scanf("%d", &a[i]);
//     }
//     for(int i = n-1; i >= 0; i--){
//         if(i % 2 == 1 ){
//             printf("%d ", a[i]);

//         }
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for(int i = 0; i < n; i++){
//         scanf("%d", &a[i]);
//     }
//     int sumOfPostive = 0;
//     int sumOfNegative = 0;
//     for(int i = 0; i < n; i++){
//     //    printf("%d ", a[i]);
//     if(a[i] > 0){
//         sumOfPostive = sumOfPostive + a[i];
//     }else if (a[i] < 0){
//         sumOfNegative = sumOfNegative + a[i];
//     }
//     }
//     printf("%d %d ", sumOfPostive , sumOfNegative);
//     return 0;
// }
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    // this is the index
    int x;
    scanf("%d", &x);

    // this is the value of index
    int v;
    scanf("%d", &v);

    for(int i = n-1; i >= 0; i--){
        if(i == x){
             a[i] = v;
            
        }
    }
    for(int i = n-1; i >= 0; i--){
        
            printf ("%d ", a[i]);
        }
        return 0;
    }
    
