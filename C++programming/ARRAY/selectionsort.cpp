#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int min;
    for(int i=0;i<(n-1);i++)
    {
        min=i;
        for(int j=i;j<n;j++)
        {
            if(a[j]<a[min])
            min=j;
        }
        int c=a[min];
        a[min]=a[i];
        a[i]=c;
    } 
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}