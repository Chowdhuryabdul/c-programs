#include<stdio.h>

void print_array(int a[], int n, int i)
{
    if(i == n){
        return;
    }
    
 /*   printf("%d\n", i);  it will print the index */
    printf("%d\n", a[i]); /* now it will print the value of index */
    print_array(a, n, i+1);
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    print_array(a, n, 0); /* here a points to array, n is size of array and 0 is th efirst index of arrray */
    return 0;
}



/* First time we will call print_array function and we send to array, size of array og and the value of index. and it will go print_array function. there it will get the array and sizr of array and the index 0. will enter to the condition which is index is equal to n (0 == 5). it is not true. then function will print the first value of index whic is 10. will call the recursive function print_array, here the array and size of array will be the same and just will incease the value of index (i+1) = 1:

second, it will call print_array function where the all the paraeter value will be same except value of i which is now 1. will check the condition and it is not true. and will print the value of second index which is 20. and the index will be increased by 1. which is 1-1 = 2


third, it will call print_array function where the all the paraeter value will be same except value of i which is now 2. will check the condition and it is not true. and will print the value of third index which is 30. and the index will be increased by 1. which is 2+1 = 3


fourth, it will call print_array function where the all the parameter value will be same except value of i which is now 3. will check the condition and it is not true. and will print the value of fourth index which is 40. and the index will be increased by 1. which is 3+1 = 4


fourth, it will call print_array function where the all the parameter value will be same except value of i which is now 4. will check the condition and it is not true. and will print the value of fifth index which is 50. and the index will be increased by 1. which is 4+1 = 5


fourth, it will call print_array function where the all the parameter value will be same except value of i which is now 5. will check the condition and it is true. and will go to the return to the line where it is called and will check nothing to execute and will return to the next one. this is the way it will return to the main function and get the return 0. will stop there */
