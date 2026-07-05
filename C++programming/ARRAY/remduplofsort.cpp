#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    int n;
    printf("Enter size:");
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
        v.push_back(a[i]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i];
    }
}
