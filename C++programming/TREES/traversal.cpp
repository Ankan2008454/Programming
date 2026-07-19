#include <iostream>
#include <vector>
#include <queue>
#include <stack>
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

// Recursive Preorder
void preorder(Node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Recursive Inorder
void inorder(Node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Recursive Postorder
void postorder(Node *root)
{
    if (root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

// Level Order
vector<vector<int>> levelorder(Node *root)
{
    vector<vector<int>> ans;

    if (root == NULL)
        return ans;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        int size = q.size();
        vector<int> level;

        for (int i = 0; i < size; i++)
        {
            Node *node = q.front();
            q.pop();

            level.push_back(node->data);

            if (node->left != NULL)
                q.push(node->left);

            if (node->right != NULL)
                q.push(node->right);
        }

        ans.push_back(level);
    }

    return ans;
}

// Iterative Preorder
vector<int> preorderiterative(Node *root)
{
    vector<int> preorder;

    if (root == NULL)
        return preorder;

    stack<Node *> st;
    st.push(root);

    while (!st.empty())
    {
        root = st.top();
        st.pop();

        preorder.push_back(root->data);

        if (root->right != NULL)
            st.push(root->right);

        if (root->left != NULL)
            st.push(root->left);
    }

    return preorder;
}

// Iterative Inorder
vector<int> inorderiterative(Node *root)
{
    vector<int> inorder;
    stack<Node *> st;
    Node *node = root;

    while (node != NULL || !st.empty())
    {
        if (node != NULL)
        {
            st.push(node);
            node = node->left;
        }
        else
        {
            node = st.top();
            st.pop();

            inorder.push_back(node->data);
            node = node->right;
        }
    }

    return inorder;
}

// Iterative Postorder (2 Stacks)
vector<int> postorderiterative2stack(Node *root)
{
    vector<int> postorder;

    if (root == NULL)
        return postorder;

    stack<Node *> st1, st2;
    st1.push(root);

    while (!st1.empty())
    {
        root = st1.top();
        st1.pop();

        st2.push(root);

        if (root->left != NULL)
            st1.push(root->left);

        if (root->right != NULL)
            st1.push(root->right);
    }

    while (!st2.empty())
    {
        postorder.push_back(st2.top()->data);
        st2.pop();
    }

    return postorder;
}

// Iterative Postorder (1 Stack)
vector<int> postorderiterative1stack(Node *root)
{
    vector<int> post;

    if (root == NULL)
        return post;

    stack<Node *> st;
    Node *curr = root;

    while (curr != NULL || !st.empty())
    {
        if (curr != NULL)
        {
            st.push(curr);
            curr = curr->left;
        }
        else
        {
            Node *temp = st.top()->right;

            if (temp == NULL)
            {
                temp = st.top();
                st.pop();
                post.push_back(temp->data);

                while (!st.empty() && temp == st.top()->right)
                {
                    temp = st.top();
                    st.pop();
                    post.push_back(temp->data);
                }
            }
            else
            {
                curr = temp;
            }
        }
    }

    return post;
}

// Preorder + Inorder + Postorder in One Traversal
void preinposttraversal(Node *root)
{
    if (root == NULL)
        return;

    vector<int> pre, in, post;
    stack<pair<Node *, int>> st;

    st.push({root, 1});

    while (!st.empty())
    {
        auto it = st.top();
        st.pop();

        if (it.second == 1)
        {
            pre.push_back(it.first->data);

            it.second++;
            st.push(it);

            if (it.first->left != NULL)
                st.push({it.first->left, 1});
        }
        else if (it.second == 2)
        {
            in.push_back(it.first->data);

            it.second++;
            st.push(it);

            if (it.first->right != NULL)
                st.push({it.first->right, 1});
        }
        else
        {
            post.push_back(it.first->data);
        }
    }
}