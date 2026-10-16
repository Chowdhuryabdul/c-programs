// these rules to cut the digit from the last
/* if we want to any digit from an integer or if i we need to cut the number from integer then we need to divide that word by - if i need to reduce last two digit of a 4 digits number, then will divide by 100, if three digit by 1000. For exemple, the 4679, here i want to reduce the last three digit then i need to divide by 1000. 
in C programming if you divide integer with another integer it will provide you integer evenif there is digit or remaining after dot. c programmming will publish only the digit without remaining. here if you divide 4679 / 1000 = 4.679- in C programming it will publish only 4 */

#include<stdio.h>
int main()
{
    int number;
    scanf("%d", &number);
    int first_digit = number / 1000; /* - it will print 4 */
   /* int first = number / 100;  - it will print 46 */
   /* int first = number / 10;  - it will print 467 */
    // printf("%d", first);
    if(first_digit % 2 == 0){
        printf("EVEN");
    }else{
        printf("ODD");
    }
    return 0;
}

