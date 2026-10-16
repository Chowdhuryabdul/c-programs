#include<bits/stdc++.h>
using namespace std;

// creating node - here it is not necessary to name it node. i can give any other name.
class Node
{
    // access modifier
    public:
    // node holdes two items
    int val; /* here value can be double, float, cahr  */
    Node* next; /* i can name here what evern i want. it store the address of the next val. here i need to give the datatype exactly same as class name. this is because this pointer is pointing to another object of the class. it is poinnting the whole object, not a value.  */

};
int main()
{
    // declare of object of that class
    Node a, b, c; /* this a, b, c is name of nodes. it will declare three different nodes in the memory which will containe a value and address of the nex value */
    a.val = 10;
    b.val = 20;
    c.val = 30;

    // create connection
    a.next = &b;
    b.next = &c;
    c.next = NULL;

    // print value
    // cout <<a.val << " " <<b.val << " " << c.val << endl;

    // how we can print by the connection
    cout << a.val<<endl;
    // will print by stored address of b node in a
    cout << (*a.next).val << endl; /* here we need to dereference it? this is because - 2B is address of whole Node. so if i dereference the 2B than i will get the whole node. so if i want to get the value of that node. than i just simply add .val--->> see the picture to get proper picture */
    
    // to print the value c by the help of a
    cout << a.next->next->val << endl;
    
    // print c by the help of b node
    cout << (*b.next).val<< endl; /* - here a.next means 2b. this 2b points to the b. a.next means b. than b.next so it means 3b. 3b.val means 30 */

    // we can print it by arrow sign, we do not need to dereferencing. why vs code convert it to the arrow sign. becuase b.next is a pointer. b.next points to 3b which is address. So to access the pointer we need to dereference it first 
    cout << b.next->val << endl;
    return 0;
}