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
Node* low(Node* root,Node* left,Node* right)
{
    if(root==NULL||root==p||root==q)
    return root;
    Node* left=low(root->left,p,q);
    Node* right=low(root->right,p,q);
    if(left==NULL)
    return right;
    else if(right==NULL)
    return left;
    else
    return root;
}