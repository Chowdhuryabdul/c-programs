#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void level_order(Node* root){ //we will take root as parameter as we have only access to the root in the binary datastructure

    if(root == NULL){
        cout << "NNo Tree" << endl;
        return;
    }

    // first task is to take a queue and push the root in the queue by ourslevs. what will be data type of the queue? data type will be Node*
    queue<Node*>q;

    // push the root in the queue
    q.push(root);

    // now we will do that three task untill they are empty
    // 1. take out pushed node from queue
    // 2. work it - print it
    // 3. at the end push it's child in the queue
    // since we have to do it for several times we can give it inside a loop
    
    while(!q.empty()){
        // 1. take out a Node from queue. we take the first Node it means front Node
        // after taking out we have to store it. so we take a variable 
        Node* front = q.front();
        
        // then pop it to get access to the next
        q.pop();


        // 2. do work with that Node
        cout << front->val << " ";

        // 3. psuh it's children
        // here is a corner case is that i have to check that this Node has the left and right child by condition.what does it means to have left child? it means left child is not NULL

       /*  if(front->left != NULL)
            q.push(front->left);
        if(front->right != NULL)
        q.push(front->right); */

        // the shorter version of this code
         if(front->left)
            q.push(front->left);
        if(front->right)
        q.push(front->right);
    }
}
int main()
{
  Node* root = new Node(10);
  Node* a = new Node(20);
  Node* b = new Node(30);
  Node* c = new Node(40);
  Node* d = new Node(50);
  Node* e = new Node(60);
  
  root->left = a;
  root->right = b;
  a->left = c;
  b->left = d;
  b->right = e;

  level_order(root);
    return 0;
}