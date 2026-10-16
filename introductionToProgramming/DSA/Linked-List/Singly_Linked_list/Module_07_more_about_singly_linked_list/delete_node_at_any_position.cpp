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


void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
   tail->next = newNode;
    tail = newNode;
}

void delete_at_any_position(Node* &head, int index){
    // first i need to run a loop to go there
    Node* tmp = head;

    for (int i = 1; i < index; i++)
    {
        /* code */
        // every time tmp will go forward so-
        tmp = tmp->next;

       
    }
    // where is thet mp now? tmp is previous index of that node which one will be deleted
     // take pointer to store the that node which will be deleted. why tmp.next here? because by looping we have brought tmp in the previous node of deleteing one. so to point the next one which will be deleted, we have written tmp.next
        Node* deleteNode = tmp->next;

        // make the connection between before and after of the deleted node
        tmp->next = tmp->next->next;

        // deleting the node
       delete deleteNode;
}

void print_existing_linked_list(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
};
int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(1){
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head, tail, val);
    }

    delete_at_any_position(head, 2); /* here i have to say which node will be deleted */

    print_existing_linked_list(head);
    return 0;
}