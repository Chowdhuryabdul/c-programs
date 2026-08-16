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

Node* input_tree(){
    int val;
    cin >> val;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);

    queue<Node*>q;
    if(root != NULL) q.push(root);
    while (!q.empty())
    {
        /* code */
        Node* parent = q.front();
        q.pop();

        int l_val, r_val;
        cin >> l_val >> r_val;

        Node* myLeft;
        Node* myRight;

        if(l_val == -1) myLeft = NULL;
        else myLeft = new Node(l_val);
        if(r_val == -1) myRight = NULL;
        else myRight = new Node(r_val);

        parent->left = myLeft;
        parent->right = myRight;

        if(parent->left != NULL) q.push(parent->left);
        if(parent->right != NULL) q.push(parent->right);
    }
    return root;
    
}
int count_node(Node* root){
    // base case
    if(root == NULL){
        return 0; // why 0 this is because there is no node. and also we have to return a integer value
    }

    // call recursion function for left and right
    int left_count = count_node(root->left);
    int right_count = count_node(root->right);

    // now add left_count + right_count + root
    return left_count + right_count + 1;
}
int main()
{
    Node* root = input_tree();
   int total_Node = count_node(root);
   cout << total_Node;
    return 0;
}