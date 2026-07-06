#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
using namespace std;
bool checksum(vector<int>&v,int d,int th)
{
    int cnt=0;
    for(int i=0;i<v.size();i++)
    {
         cnt+=(int)ceil((double)v[i]/d);
    }
    return cnt>th;
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
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        v.push_back(a[i]);
    }
    int l=1;
    int h=maxi(v);
    int threshold;
    cin>>threshold;
    while(l<=h)
    {
        int mid=(l+h)/2;
        bool check=checksum(v,mid,threshold);
        if(check)
        {
            l=mid+1;
        }
        else
        h=mid-1;
    }
    cout<<l;
}