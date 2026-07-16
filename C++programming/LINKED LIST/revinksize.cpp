#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Node
{
    public:
       int val;
       Node* next;
       Node(int data1,Node* next1)
       {
           val=data1;
           next=next1;
       }
       Node(int data1)
       {
           val=data1;
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
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
Node* reverse(Node* head)
{
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
    return head;
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
    Node* prevLast = NULL;
    Node* head=convert(v);
Node* temp = head;
Node* t = head;
int c = 0;

while (temp != NULL)
{
    c++;

    if (c == k)
    {
        Node* nextGroup = temp->next;
        temp->next = NULL;

        reverse(t);   // reverse current group

        if (prevLast == NULL)
        {
            head = t;              // first group
        }
        else
        {
            prevLast->next = t;    // connect previous group
        }

        // Move prevLast to the last node of this group
        Node* last = t;
        while (last->next != NULL)
            last = last->next;

        prevLast = last;

        // Connect to the remaining list
        prevLast->next = nextGroup;

        t = nextGroup;
        temp = nextGroup;
        c = 0;
    }
    else
    {
        temp = temp->next;
    }
}
print(head);
}