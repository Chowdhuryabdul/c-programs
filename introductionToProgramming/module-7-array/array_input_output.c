#include<stdio.h>
int main()
{
    int a[5];
    // scanf("%d %d %d %d %d %d",&a[0], &a[1], &a[2], &a[3], &a[4]);
    // printf("%d %d %d %d %d", a[0], a[1], a[2], a[3], a[4]);
    for(int i = 0; i<5; i++){
    
        scanf("%d\n", &a[i]);
        /* here i get the variable names */
        // printf("a[%d]\n", i);
    }
    for(int i = 0; i<5; i++){
        printf("%d\n", a[i]);
    }
    return 0;
}

// how loop works
// here first value of i is 0 = so it will print 0; then we will go in scanf, here %d will take one input from input.txt and store it in &a[i]. here the value of i is 0. it means the value of 0 index is 10. then will go to loop in increment then the value of i will 1 now. then check the condition, condition is true then will come to scanf take another input and store it in array of i. will come back to increment in loop. this is the way loop runn and take the input from input.txt. 
// it works same for the output as well 