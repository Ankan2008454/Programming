#include<vector>
#include<iostream>
using namespace std;
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
int csp(Node<int>* root)
{
    if(root==NULL)
    return;
    int child=0;
    if(root->left)
    child+=root->left->data;
    if(root->right)
    child+=root->data;
    if(child>=root->data)
    root->data=child;
    else
    {
        if(root->left)
        root->left->data=root->data;
        else if(root->right)
        root->right->data=root->data;
    }
    csp(root->left);
    csp(root->right);
    int tot;
    if(root->left)
    tot+=root->left->data;
    if(root->right)
    tot+=root->right->data;
    if(root->left || root->right)
    root->data=tot;
}