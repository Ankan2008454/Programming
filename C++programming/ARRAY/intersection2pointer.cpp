#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int m,n;
    cin>>m;
    int a[m];
    for(int i=0;i<m;i++)
    cin>>a[i];
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++)
    cin>>b[i];
    vector<int>v;
    int i=0;
    int j=0;
    while(i<m && j<n)
    {
        if(a[i]<b[j])
        i++;
        else if(a[i]>b[j])
        j++;
        else
        {
            v.push_back(a[i]);
            i++;
            j++;
        }
    }
    for(int i=0;i<v.size();i++)
    cout<<v[i];
}