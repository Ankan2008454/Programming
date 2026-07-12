#include<iostream>
#include<vector>
using namespace std;
class Node
{
    public:
       int data;
       Node* next;
       Node* back; 
       Node(int data1,Node* next1,Node* back1)
       {
           data=data1;
           next=next1;
           back=back1;
       }
       Node(int data1)
       {
           data=data1;
           next=nullptr;
           back=nullptr;
       }
};
Node* convert(vector<int>&arr)
{
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp=new Node(arr[i],nullptr,mover);
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
    Node* newhead=new Node(val,head,nullptr);
    head->back=newhead;
    return newhead;
}
Node* inserttail(Node* head,int val)
{
    if(head->next==NULL)
    {
        return inserthead(head,val);
    }
    Node* tail=head;
    while(tail->next!=NULL)
    {
        tail=tail->next;
    }
    Node* prev=tail->back;
    Node* newnode=new Node(val,tail,prev);
    prev->next=newnode;
    tail->back=newnode;
    return head;
}
Node* insertk(Node* head,int k,int val)
{
    if(k==1)
    return inserthead(head,val);
    Node* temp=head;
    int cnt=0;
    while(temp!=NULL)
    {
        cnt++;
        if(cnt==k)
        break;
        temp=temp->next;
    }
    Node* prev=temp->back;
    Node* newNode=new Node(val,temp,prev);
    prev->next=newNode;
    temp->back=newNode;
    return head;
}
void insertnode(Node* node,int val)
{
    Node* prev=node->back;
    Node* newNode=new Node(val,node,prev);
    prev->next=newNode;
    node->back=newNode;
}
int main()
{
    vector<int>arr={12,5,8,7};
    Node* head=convert(arr);
    head=inserthead(head,10);
    head=inserttail(head,10);  
    head=insertk(head,3,2);
    insertnode(head->next,100);
    print(head);
}