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

Node* input_tree(){// no parameter here a we will make root in this function. we also need to retunr root from here to the main

    // first root take as input - this is the root Node
    int val;
    cin >> val;

    // creation a Node for root
    // Node* root = new Node(val);
    // we need to handel a corner case here if input starts with - 1. in that context we have to check if - 1 then we will put NULL. so-
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);
    
    queue<Node*> q;
    // we have also check befor push that root is in NULL or not. But if it is NULL then nothing will be pushed. if nothing is pushed than q is empty so the below mentioned while loop will not run for a singel time. 
    if(root != NULL)  q.push(root);


    while(!q.empty()){

        // first take out the parent of q
        Node* parent = q.front();
        q.pop();

        // work with the Node
        // first ibput two valu
        int left_val;
        int right_val;
        cin >> left_val >> right_val;

        // creation of two Node
        Node* myLeft;
        Node* myRight; 
        if(left_val == - 1) myLeft = NULL;
        else myLeft = new Node(left_val);

        if(right_val == -1) myRight = NULL;
        else myRight = new Node(right_val);

        // make the connection 
        parent->left = myLeft;
        parent->right = myRight;
       
    //    third push the children to q
        if(parent->left){
            q.push(parent->left);
        }
        if(parent->right){
            q.push(parent->right);
        }
    }
    return root;
}

void print_tree(Node* root){
    
    if(root == NULL){
        cout << " No Tree" << endl;
        return;
    }
    
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* fetch_front = q.front();
        q.pop();

        cout << fetch_front->val << endl;

        if(fetch_front->left)
        q.push(fetch_front->left);
        if(fetch_front->right)
        q.push(fetch_front->right);

    }
}
int main()
{
   Node* root = input_tree();
   print_tree(root); 
    return 0;
}


// 10 20 30 4550 -1 50 60 -1 -1 -1 -1 -1 -1