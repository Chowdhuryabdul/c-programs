#include<bits/stdc++.h>
using namespace std;

class Node
{
    // access modifier
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
    Node* head = new Node (100);  
    Node* a = new Node (200);  
    Node* b = new Node (300);  
    Node* c = new Node (400);  

    head->next = a;
    a->next = b;
    b->next = c;
    // c->next = head;

    Node* slow = head;
    Node* fast = head;
    bool flag = false;
    while(fast != NULL && fast->next != NULL){
        // detect cycle
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            flag = true;
            break;
        }
    }
    if(flag == true)
    cout << "cycle detected" << endl;
    else
    cout << "No Cycle" << endl;
    return 0;
}