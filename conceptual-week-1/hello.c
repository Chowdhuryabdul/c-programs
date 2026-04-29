#include<stdio.h>
int main()
{
    int num ;
    scanf("%d", &num); /* if i provide any string in thhe scanf then i have to match it with the input, for example if i want to write 'a' in the scanf, then i have make it similar in the input. so need to write 'a' first than input to mattch the pattern. if it does not match the patter then it will print grabage value */
    printf("%d\n", num);
    printf("%p", &num);
    return 0;
}