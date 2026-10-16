#include<bits/stdc++.h>
using namespace std;

int* fun()
{
    // int arr[3] = {10, 20, 30};
   int *arr =  new int [3] ;
   
//    these assigne the value in the dynamic memory by dereferencing the address from the stack memory
   arr[0] = 10;
   arr[1] = 20;
   arr[2] = 30;
    for (int i = 0; i < 3; i++)
    {
        cout <<arr[i] <<endl;    
    }
    
    // then we have print here and return to the main function. after returning from here it has deleted all from the stack memory   
    
    return arr; /* i have send the address of 0 index to the main function */


}


int main()
{
    int *result = fun();
    cout<<result<<endl; /* here i am printing the adress of 0 index of array which has been sent from fun function which is stored in the dynamic array */
   
   for (int i = 0; i < 3; i++)
   {
    
       cout <<result[i]<<endl;
   }
   
    
    return 0;
}