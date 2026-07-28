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
    int countNodes(TreeNode* root) {
        if(root == NULL) return 0;

        int lh = findHeightLeft(root);
        int rh = findHeightRight(root);

        if(lh == rh) return (1 << lh) - 1;

        return 1 + countNodes(root->left) + countNodes(root->right);
    }

    int findHeightLeft(TreeNode* node) {
        int h = 0;
        while(node) {
            h++;
            node = node->left;
        }
        return h;
    }

    int findHeightRight(TreeNode* node) {
        int h = 0;
        while(node) {
            h++;
            node = node->right;
        }
        return h;
    }