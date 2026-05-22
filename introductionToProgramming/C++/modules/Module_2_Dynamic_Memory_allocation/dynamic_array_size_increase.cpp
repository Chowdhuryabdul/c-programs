#include<bits/stdc++.h>
using namespace std;

int main()
{
    
//    dynamic array 
   int * a = new int[3];
   for (int i = 0; i < 3; i++)
   {
    cin >> a[i];
   }







   //    if i want to add 2 more- that is why i will take another array of 5 size
int *b = new int[5];


// now copy the previous array to the new array
for (int i = 0; i < 3; i++)
{
    b[i] = a[i];
}


// now i am adding two value in the 4th and 5th index
b[3] = 200;
b[4] = 300;

// Now i can delete this array as it will waste the spacce in the memory
delete [] a;


   for (int i = 0; i < 5; i++)
   {
    cout << b[i] << " ";
   }
    
    return 0;
}

// if i want to take an static array of 3 size. then if i want to add 2 more elements with the existing array. but i can not extend in the existing array. so i need to take another array of 5 size. then copy the previous elements to the new array and add 2 new elements. but the problem is that the privious 3 size array is already in the memory and it will not be deleted. so it will be waste of memory. 