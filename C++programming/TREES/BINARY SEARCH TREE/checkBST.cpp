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
bool isValidBST(Node* root)
{
    return check(root,long MIN_VALUE,long MAX_VALUE);
}
bool check(Node* root,long minValue,long maxValue)
{
    if(root==NULL)
    return true;
    if(root->data>=maxVal || root->data<=minVal)
    return false;
    return check(root->left,minVal,root->data)&& check(root->right,root->data,maxVal);
}