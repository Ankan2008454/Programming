#include<iostream>
using namespace std;
int main()
{
    int n;
    cin<<n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(a[0]>a[1])
    {cout<<a[0];return 0;}
    if(a[n-1]>a[n-2])
    {cout<<a[n-1];return 0;}
    int l=1;
    int h=n-2;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(a[mid]>a[mid-1]&&a[mid]>a[mid+1])
        {cout<<a[mid];return 0;}
        if(a[mid-1]<a[mid])
        {
            l=mid+1;
        }
        else
        h=mid-1;
    }
}