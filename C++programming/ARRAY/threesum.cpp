#include<vector>
#include<algorithm>
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
    vector<int>v;
    
    for(int i=0;i<n;i++)
    {
        v.push_back(a[i]);
    }
    sort(v.begin(),v.end());
    vector<vector<int>>ans;
    for(int i=0;i<n;i++)
    {
        if(i>0&&v[i]==v[i-1])
        continue;
        int j=i+1;
        int k=n-1;
        while(j<k)
        {
            int sum=v[i]+v[j]+v[k];
            if(sum>0)
            {
                k--;
            }
            else if(sum<0)
            {
                j++;
            }
            else
            {
                vector<int>temp={v[i],v[j],v[k]};
                ans.push_back(temp);
                j++;
                k--; 
            }
        }
    }
    for(int i = 0; i < ans.size(); i++)
    {
        for(int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}