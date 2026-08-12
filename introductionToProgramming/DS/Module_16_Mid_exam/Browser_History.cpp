#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string val;
    Node *next;
    Node *prev;

    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Insert at tail
void insert_at_tail(Node *&head, Node *&tail, string val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    // Take inputs

    while (true)
    {
        string website;
        cin >> website;

        if (website == "end")
        {
            break;
        }

        insert_at_tail(head, tail, website);
    }

    // pointer to track my current position
    Node *current_pos = head;
    int q;
    cin >> q;
    while (q--)
    {
        // command inputs - visit, next, prev
        string command;
        cin >> command;
        if (command == "visit")
        {
        //    address inputs
            string address;
            cin >> address;

            Node *tmp = head;
            bool search_found = false;
            while (tmp != NULL)
            {
                if (tmp->val == address)
                {
                    current_pos = tmp;
                    cout << current_pos->val << endl;
                    search_found = true;
                    break;
                }
                tmp = tmp->next;
            }

            if (search_found == false)
            {
                cout << "Not Available" << endl;
            }
        }

        else if (command == "next")
        {
            if (current_pos->next != NULL)
            {
                current_pos = current_pos->next;
                cout << current_pos->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "prev")
        {
            if (current_pos->prev != NULL)
            {
                current_pos = current_pos->prev;
                cout << current_pos->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }
    return 0;
}