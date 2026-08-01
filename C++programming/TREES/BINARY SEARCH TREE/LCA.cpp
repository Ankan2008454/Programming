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
Node* LCA(Node* root,Node* p,Node* q)
{
    if(root==NULL)
    return NULL:
    int curr=root->val;
    if(curr<p->data && curr<q-data)
    {
        return LCA(root->right,p,q);
    }
    if(curr>p->data && curr>q->data)
    {
        return LCA(root->left,p,q);
    }
    return root;
}