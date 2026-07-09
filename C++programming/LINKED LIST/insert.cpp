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
Node* inserthead(Node* head,int val)
{
    Node* temp=new Node(val,head);
    return temp;
}
Node* inserttail(Node* head,int val)
{
    if(head==NULL)
    {
        return new Node(val);
    }
    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    Node* newNode=new Node(val);
    temp->next=newNode;
    return head;
}
Node* insertk(Node* head,int el,int k)
{
    if(head==NULL)
    {
        if(k==1)
        {
            return new Node(el);
        }
        else
        return head;
    }
    if(k==1)
    {
        return new Node(el,head);
    }
    int cnt=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        cnt++;
        if(cnt==k-1)
        {
            Node* x=new Node(el,temp->next);
            temp->next=x;
            break;
        }
        temp=temp->next;
    }
    return head;
}
int main()
{
    vector<int>arr={12,5,8,7};
    Node* head=convert(arr);
    head=inserthead(head,100);
    head=inserttail(head,100);
    head=insertk(head,100,2);
    print(head);
}