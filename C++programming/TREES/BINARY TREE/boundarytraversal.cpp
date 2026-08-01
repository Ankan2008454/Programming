#include <iostream>
#include <vector>
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

bool isleaf(Node *root)
{
    return (root->left == NULL && root->right == NULL);
}

void addleft(Node *root, vector<int> &res)
{
    Node *cur = root->left;

    while (cur)
    {
        if (!isleaf(cur))
            res.push_back(cur->data);

        if (cur->left)
            cur = cur->left;
        else
            cur = cur->right;
    }
}

void addright(Node *root, vector<int> &res)
{
    Node *cur = root->right;
    vector<int> tmp;

    while (cur)
    {
        if (!isleaf(cur))
            tmp.push_back(cur->data);

        if (cur->right)
            cur = cur->right;
        else
            cur = cur->left;
    }

    for (int i = tmp.size() - 1; i >= 0; i--)
        res.push_back(tmp[i]);
}

void addleaves(Node *root, vector<int> &res)
{
    if (isleaf(root))
    {
        res.push_back(root->data);
        return;
    }

    if (root->left)
        addleaves(root->left, res);

    if (root->right)
        addleaves(root->right, res);
}

vector<int> print(Node *root)
{
    vector<int> res;

    if (!root)
        return res;

    if (!isleaf(root))
        res.push_back(root->data);

    addleft(root, res);
    addleaves(root, res);
    addright(root, res);

    return res;
}