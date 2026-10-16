#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val;
        this->next = NULL;
    }
};
int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    // create cycle
    Node* d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = c;

    // detection prcoess
    // two pointers will start from head
    Node* slow = head;
    Node* fast = head;

    bool flag = false; /* in the flag we will say the opposite thing of the result inside the loop */
    // loop 
    // while(fast == NULL) in this case we will stop the loop. In while loop i have to give the condition to run the loop, not to stop the loop.
    while(fast != NULL && fast->next != NULL) /* So loop run until the fast reach to NULL */
    
    /* what condition will be here? Inside the loop i have already a condition where i have given a condtion to when to stop the loop, if it finds the cycle. but if cycle is not exist than how to stop it. we will stop it when fast will reach NULL */ 
    {

         /* This increment and decrement will be before the condition. as both slow and fast now in the head. it means they are in same position. so if we do not give increment and decrement before the condition, than loop will not run as both pointer are in head now. which is true accondring to the condition. */
        // need to move them
        // slow will give 1 step forward
        slow = slow->next;
        // fast will give 2 step forward
        fast = fast->next->next;


        if(slow == fast){ /* if slow and fast pointers merge in one point so cycle is detected */

            // cycle is detected
            flag = true;
            break; /* whenever both merge in one point we need to break the loop otherwise it will run for infinit */
        }
       
    }

    if(flag == true){
        cout << "Cycle detected";
    }else{
        cout << "Cycle not detected";
    }
    return 0;
}