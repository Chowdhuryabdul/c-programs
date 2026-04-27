// #include<stdio.h>
// int main()
// {
//     printf("Hello, world! I am learning C programming language. ^_^\n");
//     printf("Programming is fun and challenging. /\\/\\/\\\n");
//     printf("I want to give my 100%% dedication to learn!\tI will succeed one day.");
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     unsigned long long int A;
//     unsigned long long int B;
//     scanf("%lld %lld", &A, &B);
//     // unsigned long long int multiplication = A * B;
//     // printf("%llu", multiplication);
//     printf("%lld", A);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//    int number;
//    scanf("%d", &number);
//    if(number % 3 == 0){
//     printf("YES");
//    }else{
//     printf("NO");
//    }
//    return 0;
// }
// #include <stdio.h>
// int main()
// {
//    int number;
//    scanf("%d", &number);
//    for(int i = 1; i <= number; i++){
//     if(i % 3 == 0 && i % 7 == 0){
//         printf("%d\n", i);
//     }
//    } return 0;
//    }
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if (N >= 1500)
    {
        printf("I will buy Punjabi\n");
        printf("I will buy new shoes\n");
        printf("Alisa will buy new shoes");
    }
    else if (N >= 1000)
    {
        printf("I will buy Punjabi");
    }
    else
    {
        printf("Bad luck!");
    }

    return 0;
}

//    1. if i can buy punnjabi- > 1000 tk > then can buy shoes (i can buy shoes if i have 500 or more) > then alisa will buy