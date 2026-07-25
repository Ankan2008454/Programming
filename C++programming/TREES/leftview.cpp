#include<iostream>
#include<queue>
#include<vector>
#include<map>
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
vector<int> rightview(Node* root)
{
    vector<int>ans;
    queue<pair<Node*,int>>q;
    if(root==NULL)
    return ans;
    q.push({root,0});
    map<int,int>mpp;
    while(!q.empty())
    {
        auto it=q.front();
        q.pop();
        Node* node=it.first;
        int level=it.second;
        if(mpp.find(level)==mpp.end())
        {
            mpp[level]=node->data;
        }
        if(node->left!=NULL)
        q.push({node->left,level+1});
        if(node->right!=NULL)
        q.push({node->right,level+1});
    }
    for(auto it:mpp)
    {
        ans.push_back(it.second);
    }
    return ans;
}