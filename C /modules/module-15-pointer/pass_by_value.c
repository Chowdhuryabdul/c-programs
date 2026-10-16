#include<stdio.h>

void fun(int x){
     x = 20; /* althoug i have set new value of the x but it will print the 10. because we that x is main function and x is fun function are different */
    printf("sum function er x er address: %p\n", &x);
}


int main()
{
    int x = 10;
    fun(x); /* here we have just pass the value of x, not the whole varaible. which is proved by the difference value of the difference x in funn and the main function. whihc is called pass value or call by value. */
    // printf("%d\n", x);
    printf("Main function er x er address: %p\n", &x);
    return 0;
}


/* There is one limitation of the pass by value-
- if we want to change the value of that variable inside the decalred function. it does not change in the main function. for example, here you see in the main varible the value of x is 10, which we sent to the fun varaible and there we have set the new value 20 for the x. but when we print we have got 10, not 20. Because they are different varaible, not the same one that in change in one place will change in another place */