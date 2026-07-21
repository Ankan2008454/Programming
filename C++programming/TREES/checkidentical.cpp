#include<iostream>
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
bool sametree(Node* p,Node* q)
{
    if(p==NULL || q==NULL)
    return (p==q);
    return (p->data==q->data) 
    && sametree(p->left,q->left)
    && sametree(p->right,q->right);
}