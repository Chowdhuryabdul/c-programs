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

Node* tree_input(){

        // input to take root
        int val;
        cin >> val;

        // Node creation 
        Node* root;

        // Handle the corner case if first one is -1 or integer
        if(val == -1) root = NULL;
        else root = new Node(val);
        
        // creation of queue
        queue<Node*> q;

        // before push i need to check root is NULL or not
        if(root != NULL) q.push(root);

        while(!q.empty()){
            // take out the pushed Node from q
            Node* parent = q.front();
            q.pop();

            // take input of 10 Node
            int l_val, r_val;
            cin >> l_val >> r_val;

            // two Node for these input
            Node* myLeft;
            Node* myRight;

            // handle the corner case if the value is - 1
            if(l_val == -1) myLeft = NULL;
            else myLeft = new Node(l_val);

            if(r_val == -1) myRight = NULL;
            else myRight = new Node(r_val);

            // make the connection to previous input
            parent->left = myLeft;
            parent->right = myRight;

            // push these inputs to q
            if(parent->left != NULL) q.push(parent->left);
            if(parent->right != NULL) q.push(parent->right);
        }
        return root;
}

void level_order_print(Node* root){
    if( root == NULL){
        cout << "No tree" << endl;
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* parent = q.front();
        q.pop();

        cout << parent->val << " ";

        if(parent->left != NULL) q.push(parent->left);
        if(parent->right != NULL) q.push(parent->right);
    }
}
int main()
{
    Node* root = tree_input();
    level_order_print(root);
    return 0;
}