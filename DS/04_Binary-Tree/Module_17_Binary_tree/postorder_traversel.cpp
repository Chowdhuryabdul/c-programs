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

// how to print
void postorder_traversel(Node* root){

    // base case
    if(root == NULL){ //this Null menas when we will go one Node if we go to left we have found one Node, but when we go to right we do not found Node. this is where NULL located. if it gets it will come back
        return;
    }

    // here we have maintained the postorder method - left - right - root
    // first left
    postorder_traversel(root->left);
    
    // than right
    postorder_traversel(root->right);  
    
    // than root
    cout << root->val << " ";
   
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
    d->right = e;

    postorder_traversel(root);
    return 0;
}