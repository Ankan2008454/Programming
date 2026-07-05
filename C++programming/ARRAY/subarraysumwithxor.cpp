#include<iostream>
#include<map>
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
    int k;
    cin>>k;
    map<int,int>mpp;
    int sum=0;
    mpp[sum]++;
    int c=0;
    for(int i=0;i<n;i++)
    {
        sum=sum^a[i];
        int x=sum^k;
        c+=mpp[x];
        mpp[sum]++;
    }
    cout<<c;
}