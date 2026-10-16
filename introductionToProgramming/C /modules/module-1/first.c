// #include<stdio.h>
// int main() /* - it is statred from the main function */
// {
//     here will be main code
//     if i want print sth i need to write printf
//     printf("hello\n");
    
//     printf("rrgrtrfrbrg\n");

//     printf("hellow\tU");

//     if i make return 0 as comment it will still work 
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int num1 = 10;
//     // now the value changed 
//     num1 = 20;
//     float f = 4.56;
//     char c = 'a';
//     // num1 = 10;
//     // printf("%d", num1);
//     // printf("%.2f", f);
//     printf("%c", c);
//     return 0;
// }

// the proof of not to keep the bigger number than 10^9

// #include<stdio.h>
// int main()
// {
//     // int a = 1000000000; here if i give nine 0 after 1 it will run properly an will show in outut - 1000000000
//     /* int a = 10000000000;  whenever 0 is more than 9 then it prints this -1410065408, which is wrong */
//     // in case of long long int - now out put is correct 
//     long long int a = 10000000000 ;
//     printf("%lld",a);
//     return 0;
// }

// limitation in casse of float - we will use - double

#include<stdio.h>
int main()
{
    // float a = 134.567;
   /* float a = 2134.567;   if increase one digit before dot. it provides -2134.566895 */
//    float a = 2134.5678; increase one digit after dot it worrks and provide 2134.567871
//    float a = 2134.56789; increase one more digit after dot. it can not work and it prints previous one - 2134.567871. if you add more it will still not work

    double a = 2134.56789; /* now it works perfectly */
    printf(" number is = %lf", a);
    return 0;
}

