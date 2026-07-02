#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL; /* at the beginning we have stored null, but when we make the connection, then connection will be created */ 
    }
};

int main()
{
    Node a(10), b(20), c(30);
    // a.val = 10;
    // b.val = 20;
    // c.val = 30;

    a.next = &b; /* here although we have make in null in the constructor but now we have made the connection */
    b.next = &c;
    // c.next = NULL; we do not need it as we have alredy made it null in the constructor

    cout <<a.val << endl;
    cout << a.next->val << endl;
    cout << a.next->next->val << endl;

    return 0;
}
