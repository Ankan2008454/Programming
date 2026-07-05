#include<iostream>
#include<climits>
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
    int c1=0;
    int c2=0;
    int e1=INT_MIN;
    int e2=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(c1==0&&a[i]!=e2)
        {
            e1=a[i];
            c1++;
        }
        else if(c2==0&&a[i]!=e1)
        {
            e2=a[i];
            c2++;
        }
        else if(a[i]==e1)
        c1++;
        else if(a[i]==e2)
        c2++;
        else
        {
            c1--;
            c2--;
        }
    }
    int s1,s2;
    for(int i=0;i<n;i++)
    {
        if(a[i]==e1)
        s1++;
        else if(a[i]==e2)
        s2++;
    }
    if(s1>n/3)
    cout<<e1;
    if(s2>n/3)
    cout<<e2;
    
}