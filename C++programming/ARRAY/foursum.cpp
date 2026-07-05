#include<iostream>
#include<vector>
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
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        v.push_back(a[i]);
    }
    sort(v.begin(),v.end());
    vector<vector<int>>ans;
    int target;
    cin>>target;
    for(int i=0;i<n;i++)
    {
        if(i>0&&v[i]==v[i-1])
        continue;
        for(int j=i+1;j<n;j++)
        {
            if(j!=(i+1)&&v[j]==v[j-1])
            continue;
            int k=j+1;
            int l=n-1;
            while(k<l)
            {
                long long sum=v[i];
                sum+=v[j];
                sum+=v[k];
                sum+=v[l];
                if(sum==target)
                {
                    vector<int>temp={v[i],v[j],v[k],v[l]};
                    ans.push_back(temp);
                    k++;
                    l--;
                    while(k<l&&v[k-1]==v[k])
                    k++;
                    while(k<l&&v[l+1]==v[l])
                    l--;
                }
                else if(sum>target)
                l--;
                else
                k++;
            }
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
}