#include<stdio.h>

void print_digit(int n)
{
   if(n == 0){
    return;
   }
   print_digit(n/10);
   int last_digit = n % 10;
   printf("%d ", last_digit);
   
}


int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        // the reason to print here 0 is that if there is input 0 in question it will create issue and will not print 0 bby recusrion so we have printed by ourself here. as in the void function we have written condition if n == 0. so if he finds 0 in the input he will stop working there, that is why we have print 0 here first. so it will not disturb anything in the upper function.
        if(n == 0){
            printf("0");
        }
        print_digit(n);
        printf("\n");
    }
    

    
    return 0;
}

/* here the value of n is 456.
so the value of n is not 0, so condition false
after module i will get 6
print the 6
come to recursive function - inside we are dividing the n / 10, whihc will remove the last digit 6 and will send further 45.
now value of n is 45- and follow the same process until 0 */


   // printf("%d", n);

//    /*  while(n != 0){
//         printf("%d ", n % 10);
//         n /= 10;
//     } */

//     do{
//         printf("%d ", n % 10);
//         n/= 10;
    
//     }while(n != 0);
//     printf("\n");

//     /* int first_digit = n / 1000;
//     int seco_digit = (n / 100) % 10;
//     int third_digit = (n / 10) % 10;
//     int last_digit = n % 10;
//     printf("%d %d %d %d ", first_digit, seco_digit, third_digit, last_digit); */