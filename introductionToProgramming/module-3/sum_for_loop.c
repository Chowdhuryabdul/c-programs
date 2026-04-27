#include<stdio.h>
int main()
{
    int number;
    scanf("%d", &number);
    int sum = 0; /* we need to set here value 0, if we do nto set there will be garvage value in the sum which will destroy the add */
    for(int i = 1; i<= number; i++){
        // sum = sum + i;
        sum +=i;
    }
    printf("%d", sum);
    return 0;
}