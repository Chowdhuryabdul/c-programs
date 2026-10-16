// #include<stdio.h>
// int main()
// {
//     double a = 15/4;
//     printf("%lf", a);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int num = 5;
//     if(num > 0){
//         if(num< 10){
//             printf("small positive number");
//         }
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int x = 5;
//     if(x < 10){
//         printf("hello ");
//     }
//     if(x == 5){
//         printf("hi");
//     }else{

//         printf("no");
//     }
// }

// #include<stdio.h>
// int main()
// {
//     int a;
//     scanf("%d", &a);
//     if(a % 2 == 0){
//         printf("it is even number");
//     }else{
//        printf ("it is an odd number");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int num;
//     scanf("%d",&num);
//     if(num >=0){
//         printf("it is postive number");
//     }else{
//         printf("it is negative number");
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int add = n + 5;
//     printf("%d", add);
    
// }

// if(n == 0){
//         printf("Zero");
//     }else{
//         printf("Non Zero");
//     }


#include<stdio.h>
int main()
{
    int a;
    int b;
    scanf("%d %d", &a, &b);
    if(a % b == 0 || b % a == 0){
        printf("Yes");
    }else{
        printf("No");
    }
    // printf("%d %d", a, b);
    return 0;
}

#include<stdio.h>
int main()
{
    float x;
    scanf("%f", &x);
    printf("%.3f", x);
    return 0;
}