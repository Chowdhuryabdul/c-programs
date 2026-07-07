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

    void print_linked_list_ascending_order(Node* head){
        Node* tmp = head;
        vector<int> v;
        while(tmp != NULL){
           v.push_back(tmp->val);
           tmp = tmp->next;
        }
        sort(v.begin(), v.end());
        for(int x : v){
            cout << x << " " << endl;
        }
    }

int main()
{
    Node* head = new Node (20);
    Node* a = new Node (30);
    Node* b = new Node (15);
    Node* c = new Node (100);
    Node* d = new Node (50);
    Node* e = new Node (5);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    print_linked_list_ascending_order(head);
    return 0;
}