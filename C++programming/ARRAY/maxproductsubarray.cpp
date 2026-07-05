#include<iostream>
#include<algorithm>
#include<climits>
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
    int p=1;
    int s=1;
    int pmax=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(p==0)
        p=1;
        if(s==0)
        s=1;
        p=p*a[i];
        s=s*a[n-i-1];
        pmax=max(pmax,max(p,s));
    }
    cout<<pmax;
}