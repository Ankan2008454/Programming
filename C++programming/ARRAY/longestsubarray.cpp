//time complexity O(N2)
#include<iostream>
#include<algorithm>
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
    int left=0;
    int right=0;
    int k;
    cin>>k;
     if((a[left]+a[right])<0)
     {
        cout<<"Element not present";
        return 0;
     }
     int max1=0;
     int s=0;
    while(left!=n-2)
    {
     
        if(s!=k)
        {
            right++;
            s=s+a[right];
        }
        else if(s==k)
        {max1=max(max1,right-left+1);left++;}
        if(right==n-1)
        {
            left++;
            right=left;
            s=0;
        }
    }
    cout<<max1;
}
/*to make optimal approach for O(N), usomg exact two pointer approach
int left=0;
int right=0;
int sum=a[0];
int max1=0;
while(right<n)
{
    if(sum<k)
    {
        left++;
        sum += a[right];
    else if(sum>k)
    {
        sum -= a[left];
        right++;
    } 
    else
    {
        max1=max(max1,j-i+1);
        right++;
        sum += a[right];
    }
}*/