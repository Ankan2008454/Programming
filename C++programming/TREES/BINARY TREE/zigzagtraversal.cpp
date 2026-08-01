#include<iostream>
#include<vector>
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
vector<vector<int>> zigzag(Node* root>)
{
    vector<vector<int>> result;
    if(root==NULL)
    return result;
    queue<Node*> nodesqueue;
    nodesqueue.push(root);
    bool ltr=true;
    while(!nodesqueue.empty())
    {
        int size=nodesqueue.size();
        vector<int> row(size);
        for(int i=0;i<size;i++)
        {
            Node* node=nodesqueue.front();
            nodesqueue.pop();
            int index=(ltr) ? i : size-1-i;
            row[index]=node->val;
            if(node->left)
            {
                nodesqueue.push(node->left);
            }
            if(node->right)
            {
                nodesqueue.push(node->right);
            }
        }
        ltr=!ltr;
        result.push_bach(row);
    }
    return result;
}