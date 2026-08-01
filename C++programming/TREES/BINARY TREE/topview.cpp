#include<iostream>
#include<map>
#include<queue>
#include<vector>
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
vector<int> topview(Node* root)
{
    vector<int>ans;
    if(root==NULL)
    return ans;
    map<int,int>mpp;
    queue<pair<Node*,int>>q;
    q.push({root,0});
    while(!q.empty())
    {
        auto it=q.front();
        q.pop();
        Node* node=it.first;
        int line=it.second;
        if(mpp.find(line)==mpp.end())
        {
            mpp[line]=node->data;
        }
        if(node->left!=NULL)
        q.push({node->left,line-1});
        if(node->right!=NULL)
        q.push({node->right,line+1});
    }
    for(auto it:mpp)
    {
        ans.push_back(it.second);
    }
    return ans;
}
