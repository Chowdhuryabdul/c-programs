#include<stdio.h>

void mello()
{
    printf("mello\n");
}
void gello()
{
    printf("Gello\n");
    mello();
}


void hello()
{
    printf("Hello\n");
    gello();
}


int main()
{   
    printf("hi\n");
    hello();
    return 0;
}


/* In the stack memory-
-->> first c programming will execute first the main function and will take a place in a stack memory.  after printing hi, after compiler will go to the hello function. hello function will take a place in stack memory, then print the hello and will go to the gelo function. and the hello function is not finished yet because we do not return anything, but it will go the gello function........then will go the gello function and print the gello and it will remain in the stack memory, and will go to the mello function and mello function will take a place in stack memory annd print mello. 
afther printing there is noting to do. Now mello function will go out from stack memory and will return to that line from where it is called. althoug we do not write return here but the work is finished, function is returned automatically in the line where it is called. here mello function is called from the 9th line inside the gello function. after returing to the gello function, mello function will be erased from the stack memory. this is way it will go back to the main function and return 0. it means work is done.  */

/* here is a good point,  we can see from which line is called and where they have to comu back. but how compiler understand this ?
to understand this memory maintainn a call-stack */

/* what is call stack?
call stack work to maitain how function will go from one to another and how it will return. 
In other way maintain a stack to call the function. 
what is stack?
it is a data structure, which pile the data one over another. 
how stack work?
for example if you see the stack of chair, when someone want to seat he will will take the first char from the stack and will sit. and when we want to keep the chair back to the stack. we will keep the chair in the over of the current file. it is called stack. */

/* in the stack memory, compiler take place for ccall stack to maintain the chronology of function to go up and return. when it goes up it follow it one over another. and when it return it also follow the same procedure to retrun one after another. does not break the chronological rules. when it returns it remove that from the stack and find the remaing one.  */