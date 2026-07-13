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
int main()
{
    int n1;
    int n2;
    cin>>n1;
    int a[n1];
    vector<int>v1;
    vector<int>v2;
    for(int i=0;i<n1;i++)
    {
        cin>>a[i];
        v1.push_back(a[i]);
    }
    cin>>n2;
    int b[n2];
    for(int i=0;i<n2;i++)
    {
        cin>>b[i];
        v2.push_back(b[i]);
    }
    Node* head1=convert(v1);
    Node* head2=convert(v2);
    Node* temp1;
    Node* temp2;
    temp1=head1;
    temp2=head2;
    Node* dummyhead=new Node(-1);
    Node* c=dummyhead;
    int carry=0;
    while(temp1!=NULL || temp2!=NULL)
    {
        int sum=carry;
        if(temp1)
        sum+=temp1->data;
        if(temp2)
        sum+=temp2->data;
        Node* newnode=new Node(sum%10);
        carry=sum/10;
        c->next=newnode;
        c=c->next;
        if(temp1)
        temp1=temp1->next;
        if(temp2)
        temp2=temp2->next;
    }
    if(carry)
    {
        Node* newnode=new Node(carry);
        c->next=newnode;
    }
    print(dummyhead->next);
}