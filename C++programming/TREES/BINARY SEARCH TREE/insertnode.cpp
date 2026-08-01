#include<bits/stdc++.h>
class Node
{
    public:
        int data;
        Node *left;
        Node *right;

        Node()
        {
            data = 0;
            left = right = NULL;
        }

        Node(int val)
        {
            data = val;
            left = right = NULL;
        }

        Node(int val, Node *left, Node *right)
        {
            data = val;
            this->left = left;
            this->right = right;
        }
};
Node* insertIntoBST(Node* root, int val) 
{
    if (root == NULL)
        return new Node(val);

    Node* cur = root;

    while (true) {
        if (cur->val <= val) {
            if (cur->right != NULL)
                cur = cur->right;
            else {
                cur->right = new Node(val);
                break;
            }
        }
        else {
            if (cur->left != NULL)
                cur = cur->left;
            else {
                cur->left = new Node(val);
                break;
            }
        }
    }

    return root;
}