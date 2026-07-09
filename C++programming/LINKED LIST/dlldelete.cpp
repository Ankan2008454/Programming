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
void print(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
Node* convert(vector<int> &arr)
{
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}
Node* deleteHead(Node* head)
{
    if(head==NULL||head->next==nullptr)
    {
        return NULL;
    }   
    Node* prev=head;
    head=head->next;
    head->back=nullptr;
    prev->next=nullptr;
    delete prev;
    return head;
}
Node* deletetail(Node* head)
{
     if(head==NULL||head->next==nullptr)
    {
        return NULL;
    }   
    Node* tail=head;
    while(tail->next!=NULL)
    {
        tail=tail->next;
    }
    Node* newtail=tail->back;
    newtail->next=nullptr;
    tail->back=nullptr;
    delete tail;
    return head;
}
Node* deletek(Node* head,int k)
{
    if(head==NULL)
    {
        return NULL;
    }
    int c=0;
    Node* knode=head;
    while(knode!=NULL)
    {
        c++;
        if(c==k)
        break;
        knode=knode->next;
    }
    Node* prev=knode->back;
    Node* front=knode->next;
    if(prev==NULL && front==NULL)
    {
        return NULL;
    }
    else if(prev==NULL)
    {
        return deleteHead(head);
    }
    else if(front==NULL)
    {
        return deletetail(head);
    }
    prev->next=front;
    front->back=prev;
    knode->next=nullptr;
    knode->back=nullptr;
    delete knode;
    return head;
}
void deleteNode(Node* temp) 
{
    Node* prev = temp->back;
    Node* front=temp->next;
    if(front== NULL) 
    {
        prev->next = nullptr;
        temp->back = nullptr;
        free(temp);
        return;
    }
    prev->next = front;
    front->back = prev;
    temp->next = temp->back = nullptr;
    free(temp);
}
int main()
{
    vector<int>arr={12,5,8,7};
    Node* head=convert(arr);
    head=deleteHead(head);
    head=deletetail(head);
    head=deletek(head,2);
    deleteNode(head->next);
    print(head);
    return 0;
}
