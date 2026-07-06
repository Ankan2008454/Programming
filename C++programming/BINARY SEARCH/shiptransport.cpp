#include<iostream>
#include<numeric>
#include<vector>
#include<algorithm>
using namespace std;
int find(vector<int>&v,int c)
{
    int days=1,load=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]+load>c)
        {
            days+=1;
            load=v[i];
        }
        else
        load+=v[i];
    }
    return days;
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
    int d;
    cin>>d;
    int low=*max_element(v.begin(),v.end());
    int high=accumulate(v.begin(),v.end(),0);
    while(low<=high)
    {
        int mid=(low+high)/2;
        int days=find(v,mid);
        if(days<=d)
        {
            high=mid-1;
        }
        else
        low=mid+1;
    }
    cout<<low;
}