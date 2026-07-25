#include<bits/stdc++.h>
using namespace std;
int main()
{
   
 
 list <int> l = {1,2,3,4,5};
//  insert the first loop in the second loop. 
// we can store here array and vecotr as well
 list <int>l2(l);


//  inserting an array inside the list
int a [] = {10, 20, 30};
// list<int>l2(a, a+3);

// inserting a vector inside a list
vector<int> v = {10, 20, 30, 40};
list<int>l2(v.begin(), v.end());
 // print with range based loop - 
for(int val : l2){
        cout << val << endl;
    }
    return 0;
}

