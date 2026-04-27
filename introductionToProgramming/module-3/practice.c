// #include<stdio.h>
// int main()
// {
//     // for(int i = 5; i<=10; i++){
//     //     printf("hi\n");
//     //     i++;
//     // }
//     // return 0;

//     // int j = 0, i = 0;
//     // for(j = 1; j <= 5; j++){
//     //     i++;
//     // }
//     // printf("%d\n", j);

//     // for(int i = 0; i<= 10; i++)
//     // {
//     //     int x = 4;
//     // }
//     // printf("%d",i);

//     // int i = 1;
//     // do{
//     //     printf("%d", i);
//     //     i++;
//     // }while (i<5);
//     // int i = -5;
//     // while(i<3) 
//     // {
//     //  printf("hello\n");
//     //  i+=2;
//     // }

//     // int i = 5;
//     // while(i< 10){
//     //     printf("%d\n", i);
//     //     i++;
//     // }
//     for(int i = 0; i <= 10; i++){
//         int x= 4;
//     }
//     printf("%d\n", i);
// }

// #include<stdio.h>
// int main()
// {
//     // int n;
//     // scanf("%d", &n);
//     // for(int i = 1; 8* i <= 200; i++){
//     //     printf("%d*%d = %d\n", i, n, n*i);
//     // }return 0;
//     for(int i = 100; i>= 1; i-=1){
//         if(i%2 !=0){

//             printf("%d\n", i);
//         }
//     }
// }

// #include<stdio.h>
// int main()
// {
//     // int n;
//     // scanf("%d", &n);
//     // int i = 1;
//     // while(i*8 <= 200){
//     //     printf("%d*%d = %d\n", i, n, n*i);
//     //     i++;
//     // }return 0;

//     int i = 100;
//     while(i>= 0){
//         if(i%2!=0){
//             printf("%d\n", i);
//         }
//         i-=1;
//     }return 0;
// }

// #include<stdio.h>
// int main()
// {
//    int A, B;
//    scanf("%d %d", &A, &B);
//    int sum = A + B;
//    printf("%d\n", sum);
//    return 0;
// }
// #include<stdio.h>
// int main()
// {
//    int A;
//    long long int B;
//    float C;
//    char D;
//    scanf("%d %lld %f %c", &A, &B, &C, &D);
//    printf("%d\n", A);   
//    printf("%lld\n", B);   
//    printf("%.2f\n",C);   
//    printf("%c\n", D);   
//    return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int A;
//     int B;
//     scanf("%d  %d", &A, &B);
//     int sum = A + B;
    
//     printf("%d", sum);
    
// }
// #include<stdio.h>
// int main()
// {
//    int n;
//    scanf("%d", &n);
//    for(int i = 1; i <= n; i++){
//     printf("I Love Practice\n");
//    }
//     return 0;
// }
#include<stdio.h>
int main()
{
   int N;
   scanf("%d", &N);
//    for(int i = 0; i<=n; i++){
//     if(i % 5 == 0){
//     printf("%d Yes\n", i);
//    }else{
//     printf("%d No\n", i);
//    }
//    }

    int i = 1;
    while(i <= N){
        if(i % 5 == 0){
            printf("%d Yes\n", i);
        }else{
            printf("%d No\n", i);
        }
        i++;
    }
  
    return 0;
}


