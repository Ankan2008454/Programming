//input 1,2,3,5;;;;o/p wil be 4 missing
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int s=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s=s+a[i];
    }
    cout<<((((n+1)*(n+2))/2)-s);

}