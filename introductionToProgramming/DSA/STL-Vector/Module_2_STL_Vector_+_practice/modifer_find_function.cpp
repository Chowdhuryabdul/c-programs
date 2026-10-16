#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v = {1, 2, 3, 4, 5, 6};


    // find function usually retur an iterator- if that iterator comes at the end. it means it is not found. what does it mean? for example i am finding 100, here it will start from the begin 1 and will look for the all the elements until 6, than it will go to the end after 6. we know that end goes after the last element. in this case it will say that match does nt founnd. otherwise it is found

    // here we need to write iterator and type of iterator will be vector. here it is the name of the iterator
   
    // vector <int> :: iterator it = find(v.begin(), v.end(), 100);

    // here we can use shortcut auto keyword which can understand what types of iterator is this. it can easily grasp the data type which is used here. for example, here we are finding the value from a vector by find function. so obviously it will return a iterator of vector. this auto keyword understand its automaticlly and make the datatype of it into the vector datatype

   
    auto it = find(v.begin(), v.end(), 5);
    cout << *it << endl; /* we know that iterator is pointer so we need to first dereference and print. here its just pprint the value, not the index */
    if(it == v.end()){
        cout << "Not Found" << endl;
    }else{
        cout << " Found" << endl;
    }

   
    return 0;
}


 // find function does not work with the index. if i need to work with the index than i need to run a seperate loop