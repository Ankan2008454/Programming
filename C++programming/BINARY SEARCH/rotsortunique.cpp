#include<iostream>
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
    int l=0;
    int h=n-1;
    int target;
    cin>>target;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(a[mid]==k)
        {
            cout<<mid;
            break;
        }
        if(a[l]<=a[mid])
        {
            if(a[l]<=target && target<=a[mid])
            h=mid-1;
            else
            l=mid+1;
        }
        else
        {
            if(a[mid]<=target && target<=arr[h])
            l=mid+1;
            else
            h=mid-1;
        }
    }
}