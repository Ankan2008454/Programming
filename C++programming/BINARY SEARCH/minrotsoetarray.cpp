#include<iostream>
#include<climits>
#include<algorithm>
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
    int mini=INT_MAX;
    int index=-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(a[mid]>=a[l])
        {
            if(a[l]<mini)
            {
                mini=a[l];
                index=l;
            }
            l=mid+1;
        }
        else
        {
            if (a[mid] < mini)
            {  
                mini = a[mid];
                index = mid;
            }
            h=mid-1;
        }
    }
   cout<<index; 
}