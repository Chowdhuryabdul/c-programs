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

void  insert_anywhere(Node* head, int idx, int val) /* here we do not need to reference sign here this is we are not changing head here */
{
    Node* newNode = new Node(val);
    
    // run loop to travers all until the node we want to stop
    Node* tmp = head;
    
    // here we use for__loo because we have indexing issue here
    for (int i = 0; i < idx - 1; i++) /* want to be the previous node of index. but if i give 1 in the beggining than i can sae i < idx */   /* it's complexity is O(N). here N is my index. if index 10 than loop will run for the 10 times. is there any other way to optimmize teh code? No, because we have to loop trhoug to the that node where i need to insert new Node */
    {
        /* code */
        tmp = tmp->next; /* now tmp in the exactly that index after that we want to insert */

    }

    // first connect with the pushed node with the new node
    newNode->next = tmp->next;

    // connect the previous one with the new node
    tmp->next = newNode;
    
}

void print_linked_list(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}
int main()
{
   Node* head = new Node(10);
   Node* a = new Node(20);
   Node* b = new Node(30);
   
   head->next = a;
   a->next = b;

   insert_anywhere(head, 2, 100); /* i need to send three things head, value and imaginative index where i want to insert */
   insert_anywhere(head, 2, 300);
   print_linked_list(head);
    return 0;
}