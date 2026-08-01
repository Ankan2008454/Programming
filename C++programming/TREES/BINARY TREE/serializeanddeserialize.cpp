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
string serialize(Node* root)
{
    if(!root)
    return "";
    string s="";
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        Node* curNode=q.front();
        q.pop();
        if(curNode==NULL)
        s.append("#,");
        else
        s.append(to_string(curNode->val)+",");
        if(curNode!=NULL)
        {
            q.push(curNode->left);
            q.push(curNode->right);
        }
    }
    cout<<s;
    return s;
}
Node* deserialize(string data)
{
    if(data.size()==0)
    {
        return NULL:
    }
    stringstream s(data);
    string str;
    getline(s,str,',');
    Node* root=new Node(stoi(str));
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        Node* node=q.front();
        q.pop();
        getline(s,str,',');
        if(str=="#")
        {
            node->left=NULL;
        }
        else
        {
            Node* ln=new Node(stoi(str));
            node->left=ln;
            q.push(ln);
        }
        getline(s,str,',');
        if(str=="#")
        {
            node->right=NULL;
        }
        else
        {
            Node* rn=new Node(stoi(str));
            node->right=rn;
            q.push(rn);
        }
    }
    return root;
}