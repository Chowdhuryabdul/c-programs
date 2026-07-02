#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
int main()
{
    // Node a(10), b(20), c(30);
    // declare dynamic class
    Node* head = new Node(10); /* - we know that this new keyword returns a pointer. and we have learnt that we have only access of the first node. its name is head */
    Node* a = new Node (20);
    Node* b = new Node(30);

    // this is the connection of the static node
    // a.next = &b; - here a is a object. so we do not need to dereference it. b is also a object, but i need the address of the object. that is why i used to give address & sign.
    // b.next = &c;

    // this is way to build connection with the dynamic way

    // (*head).next = a 
    head->next = a;
    a->next = b;
    /* - we can not do so as head is a pointer. so we can first do dereference. another thing here a is already a address so we do not need to store another address here. but before a, b, c was object so we need to give the & sign to store the address. so now we do not need & this sign */
    

    cout << head->val << endl;
    cout <<head->next->val << endl;
    cout << a->val << endl;
    cout << b->val << endl;
    return 0;
}