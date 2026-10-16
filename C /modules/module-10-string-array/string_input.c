// How string take input 
// will see some superpowers of string
#include<stdio.h>
int main()
{
    char s[10];
    // one super power is-string can take all the char in one line and also can print in one line, without loop. but others they need two for..loop to take input and print the value

    // here we will take input the whole array- we will use %s instead of % c
    scanf("%s", &s);

    // if i want to print one charecter from one index- we got l
    // printf("%c", s[2]);

    // print the whole string
    printf("%s\n", s);

    // there is another point
    // we have taken a string of size of 10, but our string hello is 4 ndex string. what will be rest of the empty places. it will be filled by garbage value. Index 6 is empty which we can check-
    printf("%c\n", s[6] );

    // we can also print the ascii value of the charecter- we can print it by %d
    // printf("%d", s[7]);

    // now the point is how printf knows that the string is finised in o letter as we have decared the size of string 10
    // string maintain a null charecter- it means when we print a strin of array, print mustt need to knnow here to end the print. so he set a null charecter immediately after the last index. wheneven he gets null then stop printing.
    // how er can prove that there is null value after the last index of array. the ascii value of null charecter is 0. this 0 is not grabage value. it is real value of null. 
    printf("%d", s[5]);

    return 0;
}