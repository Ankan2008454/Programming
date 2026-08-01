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
stack<Node*>myStack;
BSTIterator(Node* root)
{
    pushALL(root);
}
bool hasNext()
{
    return !myStack.empty();
}
int next()
{
    Node* temp=myStack.top();
    myStack.pop();
    pushAll(temp->right);
    return temp->val;
}
void pushAll(Node* node)
{
    for(;node!=NULL;myStack.push(node),node=node->left);
}