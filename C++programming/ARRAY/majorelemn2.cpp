//Moore's voting algorithm
#include<iostream>
#include<vector>
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
    int cnt=0;
    int el;
    for(int i=0;i<n;i++)
    {
        if(cnt==0)
        {
            cnt=1;
            el=a[i];
        }
        else if(a[i]==el)
        cnt++;
        else
        cnt--;
    }
    int cnt1=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==el)
        cnt1++;
    }
    if(cnt1>(n/2))
    cout<<el;
}