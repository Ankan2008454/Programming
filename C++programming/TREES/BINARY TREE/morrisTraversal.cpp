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
vector<int>getInorder(Node* root)
{
    vector<int>inorder;
    Node* cur=root;
    while(cur!=NULL)
    {
        if(cur->left==NULL)
        {
            if(cur->left==NULL)
            {
                inorder.push_back(cur->val);
                cur=cur->right;
            }
            else
            {
                Node* prev=cur->left;
                while(prev->right && prev->right!=cur)
                {
                    prev=prev->right;
                }
                if(prev->right==NULL)
                {
                    prev->right=cur;
                    cur=cur->left;
                }
                else
                {
                    prev->right=NULL;
                    inorder.push_back(cur->val);
                    cur=cur->right;
                }
            }
        }
        return inorder;
    }
}
vector<int>getPreorder(Node* root)
{
    vector<int>preorder;
    Node* cur=root;
    while(cur!=NULL)
    {
        if(cur->left==NULL)
        {
            if(cur->left==NULL)
            {
                preorder.push_back(cur->val);
                cur=cur->right;
            }
            else
            {
                Node* prev=cur->left;
                while(prev->right && prev->right!=cur)
                {
                    prev=prev->right;
                }
                if(prev->right==NULL)
                {
                    prev->right=cur;
                    preorder.push_back(cur->val);
                    cur=cur->left;
                }
                else
                {
                    prev->right=NULL;
                    cur=cur->right;
                }
            }
        }
        return preorder;
    }
}