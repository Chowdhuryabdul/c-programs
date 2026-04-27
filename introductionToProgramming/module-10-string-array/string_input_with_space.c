#include<stdio.h>
// #include<string.h>
int main()
{
    char s[50];
   /*  in this method it just take input until space and print that
    scanf("%s", &s);
    printf("%s", s); */

    // gets method
    // gets(s);
  /*  printf("%s\n", s);  now we have got the whole string with space */

    // fgets method - we have to say here three things - string, string size with null and stdin.
    // another thing in case of size, what ever number will be put it will take that amount of input with null. so if you say 5, it will take 4 char and one for null
    // limitation of fgets() method- it consider enter in the input as char and whenever het gets the enter he stopped taking input.
    // fgets(s, 20, stdin);
    // fgets(s, 10, stdin);
    // fgets(s, 5, stdin);
    fgets(s, 25, stdin);

    printf("%s", s);
    return 0;
}