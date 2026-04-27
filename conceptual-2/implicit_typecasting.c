// Implicit Typecasting- Done automatically by the compiler when compatible types are mixed.

#include<stdio.h>
int main(){
    int a = 10;
    float b = 5.5;
    float result = a + b; /* 'a' implicitly converted to float (10.0) */
    printf("%f\n", result); /* output is 15.500000 */

    char ch = 'A';
    int num = ch; /* Implicit: char to int (ASCII value) */
    printf("%d\n", num); /* output is - 65 */
}