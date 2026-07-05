#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,int>v;
    int n1,n2;
    cin>>n1;
    int a[n1];
    for(int i=0;i<n1;i++)
    {
        cin>>a[i];
    }
    cin>>n2;
    int b[n2];
    for(int i=0;i<n2;i++)
    {
        cin>>b[i];
    }
    int c=0;
    v[a[0]]++;
    for(int i=1;i<n1;i++)
    {
        v[a[i]]++;
    }
    v[b[0]]++;
    for(int i=1;i<n2;i++)
    {
        v[b[i]]++;
    }
    for(auto x:v)
    cout<<x.first;
}
