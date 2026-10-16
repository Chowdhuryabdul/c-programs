#include <stdio.h>
#include <stdbool.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // to check is it daigonal
    // How we understand which value will be inside the diagonal and which are outside diagonal
    // Row index and column index will be same in the diagonal
    // we can rún a nested loop and check to check are we insdie the diagonal or outside (i == j), if the value of i and j is same then we are inside diagonal and (i !=j) then we are outside of diagonal
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j)
            {
                // we are inside the diagonal
                // printf("%d ", a[i][j]);
            }
        }
    }

    // declaring flag variable
    // int is_diagonal = 100;

    // we can take it as boolean
    bool is_diagonal = true; /* why it considers true- we consider that it is diagonal */

    // first need to check, is it square?
    if (r == c) /* to check is it square or not- if it is square than we will go inside.. otherwise it will be stopped and go to else to print final.here */
    {

        //   second to check the value of diagonal based on the index we also need to chek here that all the value outside the diagonal must be 0

        // How we understand which value will be inside the diagonal and which are outside diagonal
        // Row index and column index will be same in the diagonal
        // we can rún a nested loop and check to check are we insdie the diagonal or outside (i == j), if the value of i and j is same then we are inside diagonal and (i !=j) then we are outside of diagonal
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                // this is one way
                //   if (i + j == r - 1) /* it means row - 1 */
                //   {
                //       // we are inside the diagonal
                //       // printf("%d ", a[i][j]);
                //       // why we do not do any thing here? actually we do not have any headache about what is inside the diagonal. our main conceren will be outside. that is why we do not do anyting here
                //   }
                //   else

                // we can write like this as well to be outside the secondary diagonal
                if (i + j != r - 1)  /* if i and j is not equal then it will be outside of the diagonal */
                {
                    // we are outside of diagonal and all the value must be 0

                    // here we will check all the value is 0 or not
                    // we can not print it is not diagonal after chekcing 1 element. so we need to check all the elements. now the question is how we can store the value after each checking- then we need a flag variable
                    if (a[i][j] != 0)
                    { /* if it is 0 then we have to check further, if not then we can immediately say that it is not diagonal */
                        // {
                        //     /* here i can not say it is not diagonal after checking the one varibale. so it need to store the checking value in a variable. that is why i need here falg- */
                        // }else
                        // {

                        // if this condition is true than we will change the variabel of flag
                        // is_diagonal = 200;
                        is_diagonal = false;
                        // if one value is not 0 than we can print it directly that not diagonal matrix.
                        printf("this is Not diagonal matrix\n");
                    }
                }
            }
        }
        // we came here becuase after finishing the loop we can say that all the 0 outside the diagonal will be 0 or not. this loop will shwo me the result
        /* for out side the loop how i can understand , have er get diagonal or not. to understnd this we need to declare flag variable */
        // if(is_diagonal == 100)
        if (is_diagonal == true)

        {
            printf("This is a secondary diagonal matrix\n");
        }
    }
    else
    {
        printf("it is not a secondary diagonal matrix");
    }

    return 0;
}

/* use case of flag variable
we can use falg in case -where we need to check many values than we have to declare is it true or false. in this case we need to take falg variable to track the counting */