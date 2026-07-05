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
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            
            if(a[i]>a[j]&&a[i]!=0&&a[i-1]>a[i])
            {
                c=c+a[j];
                break;
            }
            else if(a[i]<a[j]&&a[i]!=0&&a[i-1]>a[i])
            {
                c=c+a[i];
                break;
            }
            else if(a[i]==a[j]&&a[i]!=0&&a[i-1]>a[i])
            {
                c=c+a[i];
                break;
            }
        }
    }
    cout<<c;
}