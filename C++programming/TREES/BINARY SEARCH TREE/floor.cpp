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
int findfloor(Node<int>* root,int key)
{
    int floor=-1;
    if(root->data==key)
    {
        ceil=root->data;
        return ceil;
    }
    if(key>root->data)
    {
        floor=root->data;
        root=root->right;
    }
    else
    {
        root=root->left;
    }
    return floor;
}