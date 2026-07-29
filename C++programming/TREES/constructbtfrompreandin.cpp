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
Vector<int>inorder; vector<int>preorder;
Node* create(int spi,int epi,int spp,int epp)
{
    if (spi > epi || spp > epp)
    return NULL;
    Node* tree = new Node(preorder[spp]);
    int i;
    for(i=spi;i<=epi;i++)
    {
        if(tree->val==inorder[i])
        break;
       
    }
    int leftSize = i - spi;
    tree->left = create(
    spi,
    i - 1,
    spp + 1,
    spp + leftSize);
    tree->right = create(
        i + 1,
        epi,
        spp + leftSize + 1,
        epp
    );
    return tree;
}