#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }
    
    // Counting the total value
    int total_val = r*c;
    
    // counting the total value
    int zero = 0;

    // now will run a nested loop and will go to all the value to count are they 0 are not?
        for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(a[i][j] == 0){
                zero++; /* it means increase the value after every count */
            }
        }
        
    }
    


    if(total_val == zero){
        printf("this is a zero matrix");
    }else{
        printf("this is not a zero matrix");
    }
    return 0;
}


// this is the first method
// i can do it wiht flag variable and check each value

/* There is another way to do this

first will check the total value of the matrix.

then will check how many 0 are in the matrix

finally will check if total value and 0 is same then it is zero matrix. */


// if i want get the tottal value of a matix- i can simply multiply row b column. here row is 2 and column is 3 = total will be 6.