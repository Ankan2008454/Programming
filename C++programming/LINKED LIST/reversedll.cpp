#include<iostream>
#include<stack>
#include<vector>
using namespace std;
class Node
{
    public:
        Node* next;
        Node* back;
        int val;
        Node(Node* next1,Node* back1,int val1)
        {
            next=next1;
            back=back1;
            val=val1;
        }
        Node(int val1)
        {
            next=nullptr;
            back=nullptr;
            val=val1;
        }
};
Node* convert(vector<int>&arr)
{
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp = new Node(nullptr, prev, arr[i]);
        prev->next=temp;
        prev=temp;
    }
    return head;
}
void print(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    vector<int>v;
    Node* head;
    for(int i=0;i<n;i++)
    {   
        cin>>a[i];
        v.push_back(a[i]);
    }
    head=convert(v);
    stack<int>st;
    Node* temp=head;
    while(temp!=NULL)
    {
        st.push(temp->val);
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL)
    {
        temp->val=st.top();
        st.pop();
        temp=temp->next;
    }
    print(head);
}