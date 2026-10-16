#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* left;
    Node* right;

    Node(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

// Build tree
Node* input_tree()
{
    int val;
    cin >> val;

    if(val == -1)
        return NULL;

    Node* root = new Node(val);

    queue<Node*> q;
    q.push(root);

    while(!q.empty())
    {
        Node* parent = q.front();
        q.pop();

        int left_val, right_val;
        cin >> left_val >> right_val;

        if(left_val != -1)
        {
            parent->left = new Node(left_val);
            q.push(parent->left);
        }

        if(right_val != -1)
        {
            parent->right = new Node(right_val);
            q.push(parent->right);
        }
    }

    return root;
}

int main()
{
    Node* root = input_tree();

    vector<int> left_side;
    vector<int> right_side;

    // Find left side
    Node* tmp = root;

    while(tmp != NULL)
    {
        left_side.push_back(tmp->val);

        if(tmp->left != NULL)
            tmp = tmp->left;
        else
            tmp = tmp->right;
    }


    // Find right side
    tmp = root;

    while(tmp != NULL)
    {
        right_side.push_back(tmp->val);

        if(tmp->right != NULL)
            tmp = tmp->right;
        else
            tmp = tmp->left;
    }

    // Print left side in reverse
    for(int i = left_side.size() - 1; i >= 0; i--)
    {
        cout << left_side[i] << " ";
    }

    // Start from 1 as root was already printed
    for(int i = 1; i < right_side.size(); i++)
    {
        cout << right_side[i] << " ";
    }

    return 0;
}