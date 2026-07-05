#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(2));
    cin>>arr[i][0]>>arr[i][1];
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++)
    {
        int start=arr[i][0];
        int end=arr[i][1];
        if(!ans.empty()&&end<=ans.back()(1))
        continue;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j][0]<=end)
            {
                end=max(end,arr[j][1]);
            }
            else
            break;
        }
        ans.push_back(start,end);
    }
    for (auto it : ans)
    {
        cout << it[0] << " " << it[1] << endl;
    }
}