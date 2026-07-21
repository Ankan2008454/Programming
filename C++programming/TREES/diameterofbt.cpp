#include <iostream>
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
int diameterBT(Node* root)
{
    int diameter=0;
    height(root,diameter);
    return diameter;
}
int height(Node* root,int &diameter)
{
    if(!node)
    return 0;
    int lh=height(node->left,diameter);
    int rh=height(node->right,diameter);
    diameter=max(diameter,lh+rh);
    return 1+max(lh,rh);
}
