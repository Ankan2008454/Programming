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
Node* bstfrompreorder(vector<int>&a)
{
    int i=0;
    return build(A,i,INT_MAX);
}
Node* build(vector<int>&A,int &i,int bound)
{
    if(i==A.size() || A[i]>bound)
    return NULL;
    Node* root=new Node(A[i++]);
    root->left=build(A,i,root->data);
    root->right=build(A,i,bound);
    return root;
}