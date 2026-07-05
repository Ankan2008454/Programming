//alternate positive and negative may not be of same size

#include<iostream>
#include<vector>
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
    vector<int>pos;
    vector<int>neg;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        pos.push_back(a[i]);
        else if(a[i]<0)
        neg.push_back(a[i]);
    }
    if(pos.size()>neg.size())
    {
        for(int i=0;i<neg.size();i++)
        {
            a[2*i]=pos[i];
            a[2*i+1]=neg[i];
        }
        int index=2*neg.size();
        for(int i=neg.size();i<pos.size();i++)
        {
            a[index]=pos[i];
            index++;
        }

    }
    else
    {
        for(int i=0;i<pos.size();i++)
        {
            a[2*i]=pos[i];
            a[2*i+1]=neg[i];
        }
         int index1=2*pos.size();
        for(int i=pos.size();i<neg.size();i++)
        {
            a[index1]=neg[i];
            index1++;
        }

    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
   
}



