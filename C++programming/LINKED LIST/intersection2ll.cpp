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
    cin>>n1;
    int a[n1];
    vector<int>v1;
    for(int i=0;i<n1;i++)
    {
        cin>>a[i];
        v1.push_back(a[i]);
    }
    int n2;
    cin>>n2;
    int b[n2];
    vector<int>v2;
    for(int i=0;i<n2;i++)
    {
        cin>>b[i];
        v2.push_back(b[i]);
    }
    Node* head1=convert(v1);
    Node* head2=convert(v2);
    if(head1==head2)
    {print(head1);return 0;}
    if(head1==NULL || head2==NULL)
    return 0;
    Node* t1=head1;
    Node* t2=head2;
    while(t1!=t2)
    {
        t1=t1->next;
        t2=t2->next;
        if(t1==t2)
        {print(t1);return 0;}
        if(t1==NULL)
        t1=head2;
        if(t2==NULL)
        t2=head1;
    }
    print(t1);
}