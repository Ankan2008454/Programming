//finding maximum consecutive number 1
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int max1=0;
    int c=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]==1)
        {
            c++;
        }
        else 
        c=0;
        max1=max(c,max1);
    }
    cout<<c;
}