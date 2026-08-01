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
int maxsum(Node* root)
{
    int maxi=INT_MIN;
    maxsum(root,maxi);
    return maxi;
}
int maxpathmove(Node* root,int &maxi)
{
    if(node==NULL)
    return 0;
    int left=max(0,maxpathmove(root->left);
    int right=max(0,maxpathmove(root->right);
    maxi=max(maxi,left+right+root->data);
    return max(left,right)+root->data;
}