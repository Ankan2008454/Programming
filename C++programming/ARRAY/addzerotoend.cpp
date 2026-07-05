#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {a[c]=a[i];c++;}
    }
    for(c;c<n;c++)
    {
        a[c]=0;
    }
    for(int i=0;i<n;i++)
    cout<<a[i];

}