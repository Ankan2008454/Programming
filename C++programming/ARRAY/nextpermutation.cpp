#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
   int k;
   cin>>k;
   int a[k];
   for(int i=0;i<k;i++)
   {
       cin>>a[i];
   }
   vector<int>v;
   for(int i=0;i<k;i++)
   {
    v.push_back(a[i]);
   }
   int index=-1;
   int n=v.size();
   for(int i=n-2;i>=0;i--)
   {
       if(v[i]<v[i+1])
       {
           index=i;
           break;

       }
   }
   if(index==-1)
   {
       reverse(v.begin(),v.end());
   }
   for(int i=n-1;i>index;i--)
   {
       if(v[i]>v[index])
       {
           swap(v[i],v[index]);
           break;
       }
   }
   reverse(v.begin()+index+1,v.end());
   for(int i=0;i<k;i++)
   {
       cout<<v[i];
   }
} 