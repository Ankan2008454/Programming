#include<iostream>
#include<cmath>
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
//BRUTE FORCE
bool check(Node* root)
{
    if(root==NULL)
    return true;
    int lh=maxdepth(root->left);
    int rh=maxdepth(root->right);
    if(abs(rh-lh)>1)
    return false;
    bool left=check(root->left);
    bool right=check(root->right);
    if(!left||!right)
    return false;
    return true;
}
//optimal
bool isbalanced(Node* root)
{
    return dfsheight(root)!=-1;
}
int dfheight(Node* root)
{
    if(root==NULL)
    return 0;
    int lf=dfheight(root->left);
    if(lf==-1)
    return -1;
    int rh=dfheight(root->right);
    if(rh==-1)
    return -1;
    if(abs(lh-rh)>1)
    return -1;
    return max(lh,rh)+1;
}