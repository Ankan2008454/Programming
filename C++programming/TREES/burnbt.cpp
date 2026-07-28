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
int findmax(map<Node<int>*,Node<int>* &mpp,Node<int>* target)
{
    queue<Node<int>*>q;
    q.push(target);
    map<Node<int>*,int>vis;
    vis[target]=1;
    int maxi=0;
    while(!q.empty())
    {
        int sz=q.size();
        int fl=0;
        for(int i=0;i<sz;i++)
        {
            auto node=q.front();
            q.pop();
            if(node->left && !vis[node->left])
            {
                fl=1;
                vis[node->left]=1;
                q.push(node->left);
            }
            if(node->right && !vis[node->right])
            {
                fl=1;
                vis[node->right]=1;
                q.push(node->right);
            }
            if(mpp[node] && !vis[mpp[node]])
            {
                fl=1;
                vis[mpp[node]]=1;
                q.push(mpp[node]);
            }
        }
        if(fl)
        maxi++;
    }
}
Node<int>* bfstop(Node<int>* root,map<Node<int>*,Node<int>*>&mpp,int start)
{
    queue<Node<int>*>q;
    q.push(root);
    Node<int>* res;
    while(!q.empty())
    {
        Node<int>* node=q.front();
        if(node->data==start)
        res=node;
        q.pop();
        if(node->left)
        {
            mpp[node->left]=node;
            q.push(node->left);
        }
        if(node->right)
        {
            mpp[node->right]=node;
            q.push(node->right);
        }
    }
    return res;
}
int time(Node<int>* root,int start)
{
    map<Node<int>*,Node<int>*>mpp;
    Node<int>* target=bfstop(root,mpp,start);
    int maxi=findmax(mpp,target);
    return maxi;
}