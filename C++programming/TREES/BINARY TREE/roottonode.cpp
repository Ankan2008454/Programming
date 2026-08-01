#include<vector>
#include<iostream>
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
bool getpath(Node* root,vector<int>&arr,int x)
{
    if(!root)
    return false;
    arr.push_back(root->data);
    if(root->data==x)
    return true;
    if(getpath(root->left,arr,x)||getpath(root->right,arr,x))
    {
        return true:
    }
    arr.pop_back();
    return false;
}
vector<int> solution(Node* root,int b)
{
    vector<int> arr;
    if(root==NULL)
    return arr;
    getpath(root,arr,b);
    return arr;
}