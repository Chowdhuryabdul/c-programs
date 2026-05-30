#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3] = {10, 20, 30};
    
    cout <<(arr[0])<<endl;
    // tp print the address of 0 index
    cout <<&arr[0]<<endl;

    // if i print only the name of array i will get the address of 0 index, which prove that the name of array store the address of 0 index. so it works as pointer
    cout <<arr<<endl;

    // To assign new value in 0 index
    *(&arr[0]) = 2000;

    // to print the value of 0 index through referencing
    cout <<*(&arr[0])<<endl;



    return 0;
}