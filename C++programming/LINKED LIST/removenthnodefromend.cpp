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
    int k;
    cin>>k;
    int a[k];
    vector<int>v;
    for(int i=0;i<k;i++)
    {
        cin>>a[i];
        v.push_back(a[i]);
    }
    int n;
    cin>>n;
    Node* head=convert(v);
    Node* fast=head;
    Node* slow=head;
    for(int i=0;i<n;i++)
    {
        fast=fast->next;
    }
    if(fast == NULL)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
        print(head);
        return 0;
    }
    while(fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next;
    }
    Node* delnode=slow->next;
    slow->next=slow->next->next;
    delete(delnode);
    print(head);
}