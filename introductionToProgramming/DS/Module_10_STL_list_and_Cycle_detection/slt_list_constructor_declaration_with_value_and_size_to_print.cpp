#include<bits/stdc++.h>
using namespace std;
int main()
{
   
    
    // we can set the give the value to create a list- such as i will give here 10, it means the list will be 10 size. it will have 10 nodex. here all the list value will be 3
    list<int>l(10, 3);

    // we can not print the list l[0] like this, as it works behined the scnene as soubly linked list. so we have to use the iterator to print this. iterators are pointer so we have to dereferece them to get the value. Now it will give us the begingin value - whic is 3
    cout << *l.begin() << endl;

    // if we want to print all the value of 10 nodes, than we have to run a loop. But it will not be a nomal loop as it does not hav eindex, so we have to run it with the iterator. we can use "auto" keyowrd to refer the iterator

    // print with iterator
    // how does this work? - here it will starts from the begin. the condition means it will run untill til iterator ends and than it will increase. 
    for(auto it  = l.begin(); it != l.end(); it++){
        cout << *it<< endl;
    }

    // print with range based loop - we will use this one a lot here because we do need to work here with the index in the list. but in array or vector we have to work with the index so we must need to use that normal loop
    // we can make it much shorte by range based loop
    // first i need to say what type of data will come here - which is integer
    // from where it is coming? coming from list l
    for(int val : l){
        cout << val << endl;
    }
    return 0;
}

// it works behind the scene same as dobly linkd list
/* auto it  = l.begin(); - we used to take temporary tmp
it++ - tmp = tmp.next
it != l.end(); - while(tmp != NULL) */