/* #include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    // to get the every digit of this number (345)
    int first_digit = n / 100;
    int second = (n / 10) % 10;
    int third = n % 10;
   int  sum = first_digit + second + third;
    printf("%d +%d + %d = %d\n", first_digit, second, third, sum );
    // int middle = n % 10;

    return 0;
} */

#include<stdio.h>
#include<string.h>
int main()
{
    char s[100001];
    scanf("%s", s);

    // here we got the length to run the loop til that length
    int length = strlen(s); /* by this we have got the length. we need this to run loop to how long */
    int sum = 0;
    for(int i = 0; i < length; i++){
        // printf("%c", s[i]); it prints the number as charecter
        // printf("%d\n", s[i]); it prints the ascii value
        // it does not work, because it sum the ascii value of charecter 3,4,5 their ascii value is 51, 52, 53
        // we nned to convert these ascii value into digit. so the ascii value or 0 48. it means if we deduct 48 from each one we will get the real intger. if i can not not remeber the ascii value of 0, then we can simly write 0 inside the qutation.

        // here the ascii value of charecter type number is converted into integer by deduction 48 or writing - '0'
        // sum += s[i]-48; - it is correct
        sum += s[i] - '0'; /* it is also correct */
    }
    printf("%d", sum);
    return 0;
}