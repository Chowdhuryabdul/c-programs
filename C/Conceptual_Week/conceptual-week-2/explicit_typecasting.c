#include<stdio.h>
int main()
{
    // Float to int (turncates decimal)
    float pi = 3.14159;
    int intpi = (int)pi;
    printf("%d\n", intpi); /* output will be - 3 */

    // int to float
    int x = 5;
    int y = 2;
    float result = (float) x / y;
    printf("%f\n", result); /* - output will be - 2.500000 */

    // int to char
    int ascii = 97;
    char letter = (char) ascii;
    printf("%c\n", letter); /* output will be 'a' */

    // double to int
    double large = 123.456;
    int turncated = (int) large;
    printf("%d\n", turncated); /* Output: 123 */
    return 0;
}