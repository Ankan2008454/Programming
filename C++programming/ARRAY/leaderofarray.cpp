#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int>v;
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]>maxi)
        {
            v.push_back(a[i]);
            maxi=a[i];
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
}