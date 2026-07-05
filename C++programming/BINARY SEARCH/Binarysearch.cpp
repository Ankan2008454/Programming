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
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==target)
        {
            cout<<"the target value is present in: "<<mid;
            break;
        }
        else if(target>a[mid])
        low=mid+1;
        else
        high=mid-1;
    }
}