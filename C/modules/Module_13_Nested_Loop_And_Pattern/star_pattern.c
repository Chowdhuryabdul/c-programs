#include<stdio.h>
int main()
{
    int n;
    int star = 1; /* this variable to track the changing of printing the variable. why choose the value 1? this is because every time it increased by 1 after every line conpared to its every line */
    scanf("%d", &n);
    
    
    // running loop to print the line based on input
    for(int i = 1; i <= n; i++){
        
        // this loop will prinnt the * in every line
        // in this loop we can not use i twice, so we need to take new variable j
        
        // for(int j =0; j<5; j++) /* by this condition it prints 5 star in every line. but the number is not absolute, it is changing. so we can put the varaible instead of fixed value. so it will change based on the variable. */
       
        for( int j = 0; j<= star; j++) /* condition with variable */
        {

            printf("*");
        }

        // print the new line
        printf("\n");


        /* why increase the value of star 1 after every line? this is because we have seen in the patter. star is increased by 1 in everyline compared to its previous line. so we increase here because of increase by 1 after one line. */
        star++;
    }
    return 0;
}



// there are three things to follow -
// 1. At first print the line with a loop based on the input
// 2. Secondly print abolute star.
// 3. Then change the number of star 


/* concept is in case of patter printing-
printing start by prinnting 1 star.
and every line it increase by 1 compared to previous line.
for example, first line 1, second line 2, third line 3, fourth line 4.
here it is clear that everyline it increases by one star compare to previous line.

our work is to print only one and loop will print rest of them */

/* there is rules-
if sth changing conineoulsy, we need to take a variable to track this change */

/* whatever number input is-
evry time star starts from 1
so we can give the value of variable 1 */


/* How these loop wroks?
--> value of N is 3
--> come to first loop

-->>this is first round<<--
    -->here i = 1;
    --> condition is ture as 1 < 3;
    --> then it will go inside the loop and will get another loop
        --> here j = 1;
        --> value of star variable is 1
        --> condition is the j < star value, so condition true
        --> then it will go inside the loop and print one *
        --> will comeback to internals loop increment or decrement. hhere it will increase the value of j by 1. now value of j is 2. so condition is j < star. so 2<star, no! condition is false. it will stop there.
        --> then, it will go outside of loop and print new line. and it will start to print from the second line 
        --> Then by star++, we have increase the value of star 1, not the value of star variable is 2. 
        
        -->>this is second round<<--
        --> the value of i will be 2
        --> and codition is still true- i < n
        --> so it will come to the next loop
            --> here j = 1;
            --> value of star variable is now 2
            --> condition is the j < star value, so condition true
            --> then it will go inside the loop and print one *
            --> will comeback to internals loop increment or decrement. it will increase the value of j by 1. now value of j is 2. so condition is j <= star. so 2<=star, true! condition is true. 
            --> it will print another star.
            --> will comeback again to internals loop increment or decrement. it will increase the value of j by 1. now value of j is 3. so condition is j <= star. so 2<=star, No! condition is false.
            --> then, it will go outside of loop and print new line. and it will start to print from the third line 
            --> Then by star++, we have increase the value of star 1, not the value of star variable is 2 + 1 = 3.


             -->>this is third round<<--
        --> the value of i will be 3
        --> and codition is still true- i < n
        --> so it will come to the next loop
            --> here j = 1;
            --> value of star variable is now 3
            --> condition is the j < star - 1< 3 value, so condition true
            --> then it will go inside the loop and print first one *
            --> will comeback to internals loop increment or decrement. it will increase the value of j by 1. now value of j is 2. so condition is j <= star. so 2<=star, true! condition is true. 
            --> it will print second star.
            --> will comeback again to internals loop increment or decrement. it will increase the value of j by 1. now value of j is 3. so condition is j <= star. so 3<=star, yes! condition is true.
             --> it will print third star.
            --> will comeback again to internals loop increment or decrement. it will increase the value of j by 1. now value of j is 4. so condition is j <= star. so 4<=star, No! condition is false.
            --> then, it will go outside of loop and print new line. and it will start to print from the fourth line 
            --> Then by star++, we have increase the value of star 3, not the value of star variable is 3 + 1 = 4.


            Foruth round
            --> Now the value of i will 4
            --> and the value of N is 3
            --> condition is i < n - it means 4 < 3
            --> it is false
            --> so loop will stop immediately.
        */