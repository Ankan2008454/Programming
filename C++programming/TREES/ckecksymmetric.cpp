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
bool checks(Node* left,Node* right)
{
    

     if(left == NULL && right == NULL)
        return true;
    if(left == NULL || right == NULL)
        return false;
    if(left->val != right->val)
        return false;
    return checks(left->left, right->right) &&
            checks(left->right, right->left);
    
}
bool symmetric(Node* root)
{
    if(checks(root->left,root->right))
    return true;
    else
    return false;
}