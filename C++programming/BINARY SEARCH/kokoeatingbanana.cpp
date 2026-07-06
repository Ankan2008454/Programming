#include<iostream>
#include<cmath>
#include<vector>
#include<climits>
using namespace std;
int total(vector<int>&v,int m)
{
    int s=0;
    for(int i=0;i<v.size();i++)
    s=s+ceil((double)v[i]/(double)m);
    return s;
}
int maxi(vector<int>&v)
{
    int ma=INT_MIN;
    for(int i=0;i<v.size();i++)
    ma=max(ma,v[i]);
    return ma;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        v.push_back(a[i]);
    }
    int hi;
    cin>>hi;
    int low=1;
    int high=maxi(v);
    while(low<=high)
    {
        int mid=(low+high)/2;
        int t=total(v,mid);
        if(t<=hi)
        high=mid-1;
        else
        low=mid+1;
    }
    cout<<low;
}