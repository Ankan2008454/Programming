#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cinn>>m>>n;
    int adj[n+1][m+1];
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    return 0;
}