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
int k;
int ans;
void inorder(Node* root)
{
    if(!root || k==0)
    return;
    inorder(root->left);
    k--;
    if(k==0)
    {
        ans=root->val;
        return;
    }
    inorder(root->right);
}
int kthsmallest(Node*,int K)
{
    k=K;
    inorder(root);
    return ans;
}