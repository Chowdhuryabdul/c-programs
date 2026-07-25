#include<bits/stdc++.h>
using namespace std;
int main()
{
    list <int> l = {100, 200, 300, 400};
    list <int> l2 = {2000, 4000};
    vector<int> v = {1, 2, 3, 4};

    // insert at any position
    // here we have to use in the Next function as we know that we can not directly access linked list by index??
    // l.insert(next(l.begin(),2), 3000);

    // even we can insert multiple nodes or another listed items
   l.insert(next(l.begin(), 2), l2.begin(), l2.end());

//    we can also inser a vector in the 2nd index
l.insert(next(l.begin(), 2), v.begin(), v.end());
    for(int val : l){
        cout << val << endl;
    }
    return 0;
}

// this complexity is O(N). why O(N)? this is because it will if write in vector v[20]- it will go 2oth index in one go.but in linked list it will not work like this. here i have writeen imaginery 2 index, it means it will first one loop to go 0 index, than another loop to go 1 index and than 2nd index. so it will run loop as many as times as you want to go
/* how vector works for the insert function? vector has the same insert function
it's order of complexity is also O(N), v.insert(v.begin) + 2. the order complexity of insert() is O(N) and v.begin() is 0(1).  */
/* but in case of list it has also insert function where it has - l.insert(next(l.begin(), 2)) - here the order of complexity for the insert part is O(1) and  next(l.begin(), 2) for this part is O(N) this is because for the insert part it does not need to move something futher same as vector. here just needs to do 4 connection to insert new node. but this part next(l.begin(), 2) the O(n), because it needs to run a loop to go the 2nd index to insert. */