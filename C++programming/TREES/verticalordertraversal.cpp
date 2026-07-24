#include<iostream>
#include<map>
#include<vector>
#include<multiset>
#include<queue>
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
vector<vector<int>> verucaltraversal(Node* root)
{
    map<int,map<int,multiset<int>>> nodes;
    queue<pair<Node*,pair<int,int>>> todo;
    todo.push({root,{0,0}});
    while(!todo.empty())
    {
        auto p=todo.front();
        todo.pop();
        Node* node=p.first;
        int x=p.second.first,y=p.second.second;
        nodes[x][y].insert(node->val);
        if(node->left)
        {
            todo.push({node->left,{x-1,y+1}});
        }
        if(node->right)
        {
            todo.push({node->right,{x+1,y+1}});
        }
    }
    vector<vector<int>> ans;
    for(auto p:nodes)
    {
        vector<int>col;
        for(auto q:p.second)
        {
            col.inset(col.end(),q.second.begin(),q.second.end());
        }
        ans.push_back(col);
    }
    return ans;
}