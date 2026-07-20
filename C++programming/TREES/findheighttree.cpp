#include<iostream>
#include<cmath>
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
int maxdepth(Node* root)
{
    if(root==NULL)
    return 0;
    int lh=maxdepth(root->left);
    int rh=maxdepth(root->right);
    return 1+max(lh,rh);
}