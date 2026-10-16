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

// function to insert in head - why i am doing in function? this is because if i need to do this multiples time which we can do it by the function. whenever we need we will just call it.

void insert_at_head(Node* &head, int val){ /* what is head? it is pointer of Node */  /* O(1) */

    // create a new node
    Node* newNode = new Node(val);

    // make the connection of new node with the existing head
    newNode->next = head;

    // moving head from the second node to the first node which is inserted
    head = newNode;

}

// function to print the linked list

void print_linked_list(Node* head){
      Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

int main()
{
    Node * head = new Node (10);
    Node * a = new Node ( 20);
    Node* b = new Node(30);
    // Node* c = new Node(40);

    head->next = a;
    a->next = b;
    // b->next = c;
    
    // call the insert head fun
    // i will give or send in the function the head, this is because function can access the whole linked list by the head
    // we also ggive 100 which we will insert
    insert_at_head(head, 100);

    // insert it again it will be head now 
    insert_at_head(head, 200);

    // insert it again it will be head now - how this is happend this is because we have made function which just creating new.
    insert_at_head(head, 300);

    // print linked list by function
    print_linked_list(head);
    return 0;
}


// complexity of code -
// as there is no loop it means the complexity will be O(1)