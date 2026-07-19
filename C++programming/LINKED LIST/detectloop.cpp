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
    int n;
    cin>>n;
    int a[n];
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        v.push_back(a[i]);
    }
    Node* head=convert(v);
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)
        {
            cout<<"TRUE";
            return 0;
        }
    }
}
//this code will not print anything as it is not designed to take loops as input GFG and Leetcode arer predefined ly designed so don't worry.
