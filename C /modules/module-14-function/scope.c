
// we want to prove how the variables in each functionn does not access or distrub from another function although they are similar in name

// it print both x value, althoug name is same. we that in stack memory it hase different place to store the value.
#include <stdio.h>

int x = 10; /* it is global variable which is declared outside the function that will be accessible from anu function. it accesible from the main and sum function. */
int sum()
{
    // int x = 2000; /* scope of this x just inside this function, you can call or access it from outside this function */
    printf("%d\n", x);
}

int main()
{

    // int x = 10;
    sum();
    printf("%d", x); /* scope of this x just inside this function, you can call or access it from outside this function */
    // now x is declared gloablly declared and it is accesible from evrywhere. 
    return 0;
}

// These two a, b in the two function is totally different.