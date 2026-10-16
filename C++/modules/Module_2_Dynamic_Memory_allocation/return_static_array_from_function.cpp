#include<bits/stdc++.h>
using namespace std;


int* fun()/*  as the 0 index of array store the address of the first index. so if we want to return array then we have to give return type in function as pointer */
{
    int a[5]; /* this a is the name of array which basically store the adrress of 0 index of array. */
   
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    
    
    
    // int *a = new int[5];
    
    return a;
}

int main()
{
    int* x = fun(); /* as we have sent from fun function as pointer. so here we have to receive it as pointer */
    // fun();
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << x[i];
    // }
    return 0;
}



// here we can not print the array which is returned from the fun function. but we have received the segementation error which means that we try to access to the memory which does not exist. here it happend because we have declared a static array which is stored in stack memory. after returning from the stack memory it get deleted automatically. that is why when we retrun it from fun to main we can not print 