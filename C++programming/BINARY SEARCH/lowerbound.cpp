//Find the next largest or equal element as target
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
    int target;
    cin>>target;
    int low=0;
    int high=n-1;
    int m=n;
    while(low<=high)
    {
        int mid=(low+high)/2;
       if(target>=a[mid])
        {
            low=mid+1;
        }
        else
        {
            m=a[mid];
            high=mid-1;
        }
    }
    cout<<m;
}