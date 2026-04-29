// To convert charecter data type into integer

#include<stdio.h>
int main()
{
    // Store small data into big data
    // char ch = 'a';
    // int x = ch;
    // int a = 5; /* her a is typecasted to b */
    // double b =  a;
    
    // Store big data in small data 
    // long long int m = 123456789012;
    // int n = m;


    // int a  = 100000;
    // int b = 100000;
    
    // long long int mul = (long long int)a * b; /* it is called explicit typecas ting */

    // int a  = 4;
    // int b = 6;
    // float sum = (float)a + b;

    // int x = 17;
  /*  double y = x;   implicit typecasting */
    // printf("%lf", y );
    
    int x = 17;
    int y = 5;
    double z = (double)x/y; /* i have got the reuslt 3.00000- but it is not proper answer. if i want to get the proper answer then i have to do the explicit typecasting to make it double. after type casting i have got this result - 3.400000 */
    double z = (1.0*x)/y; /* this is another way to write double */
    // printf("%lf", z);

    // Another way to do explicit typecasting
    long long int p = 1000000LL * 1000000;
    printf("%lld", p);
    return 0;
}