#include<iostream>
#include<vector>
using namespace std;
class Node
{
    public:
       int data;
       Node* next;
       Node(int data1,Node* next1)
       {
           data=data1;
           next=next1;
       }
       Node(int data1)
       {
           data=data1;
           next=nullptr;
       }
};
Node* convert(vector<int>&arr)
{
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
void print(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
Node* findnthnode(Node* temp,int k)
{
    int cnt=1;
    while(temp!=NULL)
    {
        if(cnt==k)
        return temp;
        cnt++;
        temp=temp->next;
    }
    return temp;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        v.push_back(a[i]);
    }
    int k;
    cin>>k;
    Node* head=convert(v);
    if(head==NULL || k==0)
    {
        print(head);
        return 0;
    }
    Node* temp=head;
    int len=1;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        len++;
    }
    if(k%len==0)
    {
        print(head);return 0;
    }
    k=k%len;
    temp=head;
    Node* lastnode=findnthnode(head,len-k);
    head=lastnode->next;
    lastnode->next=NULL;
    Node* tail = head;
    while(tail->next != NULL)
    {
        tail = tail->next;
    }
    tail->next = temp;
    print(head);
}