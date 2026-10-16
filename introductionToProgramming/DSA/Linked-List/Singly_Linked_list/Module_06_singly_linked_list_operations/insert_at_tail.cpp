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
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head, int val) /* here we  send head as reference this is because we will change here the head */
{
    Node* newNode = new Node(val);
    // go to the last node
    Node* tmp = head;
    while(tmp->next != NULL){ /* at the end of loop tmp will be in the last Node */ 
    /* the compleixty of this is O(N), as i need to run the loop based on the index number */
        tmp = tmp->next;
    }
    // make the connection
    tmp->next = newNode;

}

void print_node(Node* head){ /* here we do not send head as reference this is because we do not change here just print */
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

    insert_at_tail(head, 100);
    insert_at_tail(head, 200);
    insert_at_tail(head, 300);
    print_node(head);
    return 0;
}


/* complexity of the insert at tail --

to insert one Node, the order of complexit is O(N). it is so bad complexity, so we have to optimized it. 
when we need to take input from the users 
-
in that case the current head is null. so the one i will take it will be head, if i take another one it will insert at tail. if take number 3 it will also insert at tail. and will follow this. so first value can insert at head or tail, but after that i have to insert all in the tail.
wehn to insert a single value - it's order of complexity gets O(n). if i need to insert N number input than complexity will be O(N*N).it is so bad complexity. so if we want insert 10 value, the complexity will be O(10*N). which is so bad. 
so if i want to insert only one valye it's complexity become O(N). it is wors than array and vector as single value complexity of array and vector is O(N)  . */