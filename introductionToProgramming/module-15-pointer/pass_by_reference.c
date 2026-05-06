#include<stdio.h>

// void fun(int x) - it is in case of normal variable

void fun(int* p)
{
    // x = 20;
    *p = 20; /* this is dereference */
    //  printf("sum function er x er address: %p\n", &x);
}

int main()
{
    int x = 10;
    fun(&x);
    printf("%d\n", x);
    // printf("Main function er x er address: %p\n", &x);
    return 0;
}

/* The probelm is that -
- if we want to change the vairable in the function 
- it does not change in the main function. becuaes both variable is different and has different reference name.
- this is because we have just send the value from the main function to other function whic is called pass by value.
- So if we want to do so that the change in the other function will be activated in the main functionn then it has to be by pass by reference, not pass by value.
- pass by reference means i have to send them reference of that value and will tell, change the value of that reference which is already sent
- then i will get that change in the main function

- first we need send the variabel with the reference from the main function. how to do that? we need to add & sign before that variable - fun(&x)

-  to receive this, we nned to change the variable type as we know int, char or double type of for mat specifier can not store the reference address. so we need pointer type variable to receive this.
- since the x is integer the pointer type variable will start int data type then * and pointer variable name. see - (int* p)

- Now if we deference of the pointer. to change the value of x  current value then we will get that change from the main function. see - *p = 20

how it works-
- let us when we declare main function it will take a location for x varaibl. th elocation address is 2DF
-  The we call the fun function it will take another space in the memory. inside the fun function we have taken a pointer he will take a space with location inside the location of fun funtion. whicn name is 3DC.

-  in the sum function we have given address of x -- fun(&x), which is sent to the fun funnction poinnter variable. then 2DF address will go to the poinnter variable in the fun function

- Then we dereferencing the pointer variable. what happend by dereferencing? poinnter will go to that address which is already stored in the pointer variable. 2DF is inside the pointer. so comfiler will search for the 2DF location and he set the 20 in place of previous value. 
*/