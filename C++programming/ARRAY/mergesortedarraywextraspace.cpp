#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1;
    cin>>n2;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n2;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(a[i]>b[j])
            swap(a[i],b[j]);
        }
    }
    sort(&b[0],&b[n2]);
    sort(&a[0],&a[n1]);
    for(int i=0;i<n1;i++)
    {
        cout<<a[i];
    }
    for(int i=0;i<n2;i++)
    {
        cout<<b[i];
    }
}