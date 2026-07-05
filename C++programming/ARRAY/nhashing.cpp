#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int hash[13]={0};
    for(int i=0;i<n;i++)
    {
        hash[a[i]]++;
    }
    int q;
    cin>>q;
    cout<<hash[q];
}