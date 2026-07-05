#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    int l=0;
    int h=n;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(pow(mid,m)==n)//use normal integer multiplication except pow function
        {
            cout<<mid;
            break;
        }
        else if(pow(mid,m)>n)
       h=mid-1;
    else
    l=mid+1;
    }
}