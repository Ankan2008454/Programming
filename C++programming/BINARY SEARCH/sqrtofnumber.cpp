#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int l=0;
    int h=n;
    int ans=0;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(mid*mid<=n)
        {ans=mid;l=mid+1;}

        else
        h=mid-1;
    }
    cout<<ans;
}