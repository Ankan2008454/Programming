#include<iostream>
#include<vector>
#include<climits>
using namespace std;
bool possible(vector<int> &v,int d,int m,int n)
{
    int cnt=0;
    int b=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]<=d)
        cnt++;
        else
        {
            b=b+cnt/n;
            cnt=0;
        }
    }
    b+=cnt/n;
    if(b>=m)
    return 1;
    else
    return 0;
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
    int n1,m;
    cout<<"Enter no of adjacent rows";
    cin>>n1;
    cout<<"Enter no of bouquets";
    cin>>m;
    int l=0;
    int h=maxi(v);
    int c=0;
    if((long long)m * n1 > n)
    {
        cout << -1;
        return 0;
    }
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(possible(v,mid,m,n1))
        h=mid-1;
        else
        l=mid+1;
    }
    cout<<l;
}